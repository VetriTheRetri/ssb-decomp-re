use rgb::RGBA8;
use std::ops::{Add, Div, Mul};

// bit converters
#[inline(always)]
pub fn scale_5_to_8(v: u8) -> u8 {
    (v as u16).mul(0xFF).div(0x1F) as u8
}
#[inline(always)]
pub fn scale_8_to_5(v: u8) -> u8 {
    (v as u16).add(4).mul(0x1F).div(0xFF) as u8
}
#[inline(always)]
pub fn scale_4_to_8(v: u8) -> u8 {
    v * 0x11
}
#[inline(always)]
pub fn scale_8_to_4(v: u8) -> u8 {
    v / 0x11
}
#[inline(always)]
pub fn scale_3_to_8(v: u8) -> u8 {
    v * 0x24
}
#[inline(always)]
pub fn scale_8_to_3(v: u8) -> u8 {
    v / 0x24
}

// rgba16 packers/unpackers
#[inline(always)]
pub fn unpack_rgba16(p1: u8, p2: u8) -> (u8, u8, u8, u8) {
    (
        scale_5_to_8((p1 & 0xF8) >> 3),
        scale_5_to_8(((p1 & 0x07) << 2) | ((p2 & 0xC0) >> 6)),
        scale_5_to_8((p2 & 0x3E) >> 1),
        (p2 & 0x01) * 0xFF,
    )
}
#[inline(always)]
pub fn pack_rgba16(pixel: RGBA8) -> (u8, u8) {
    let r = scale_8_to_5(pixel.r);
    let g = scale_8_to_5(pixel.g);
    let b = scale_8_to_5(pixel.b);
    let a = (pixel.a != 0) as u8;

    ((r << 3) | (g >> 2), (g << 6) | (b << 1) | (a))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn scaling_5bit_to_8bit() {
        assert_eq!(scale_5_to_8(0), 0);
        assert_eq!(scale_5_to_8(0x1F), 0xFF);
        assert_eq!(scale_5_to_8(0x0E), 0x73);
    }
    #[test]
    fn scaling_8bit_to_5bit() {
        assert_eq!(0, scale_8_to_5(0));
        assert_eq!(0x1F, scale_8_to_5(0xFF));
        assert_eq!(0x0E, scale_8_to_5(0x73));
    }

    #[test]
    fn scaling_3bit_to_8bit() {
        assert_eq!(scale_3_to_8(0), 0);
        assert_eq!(scale_3_to_8(7), 0xFC);
        assert_eq!(scale_3_to_8(6), 0xD8);
        assert_eq!(scale_3_to_8(5), 0xB4);
        assert_eq!(scale_3_to_8(4), 0x90);
        assert_eq!(scale_3_to_8(3), 0x6C);
        assert_eq!(scale_3_to_8(2), 0x48);
        assert_eq!(scale_3_to_8(1), 0x24);
    }

    #[test]
    fn scaling_8bit_to_3bit() {
        assert_eq!(0, scale_8_to_3(0));
        assert_eq!(7, scale_8_to_3(0xFF));
        assert_eq!(3, scale_8_to_3(0x6C));
        assert_eq!(2, scale_8_to_3(0x48));
        assert_eq!(1, scale_8_to_3(0x24));
    }
}
