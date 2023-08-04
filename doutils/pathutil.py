def append_suffix(src, ext):
    ''' Append suffix to Path `src` '''
    return src.parent / (src.name + ext)

def up_one_dir(src, out_ext=None):
    ''' Return `src` Path with the file up one directory
        If there is an `out_ext`, the `src` file's extension is changed
    '''
    if not (out_ext is None):
        src = src.with_suffix(out_ext)
    
    gp = src.parents[1]
    return gp.joinpath(src.name)
