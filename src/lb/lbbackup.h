#ifndef _LBBACKUP_H_
#define _LBBACKUP_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <lb/lbdef.h>

extern s32 lbBackupCreateChecksum(LBBackupData *backup);
extern sb32 lbBackupIsChecksumValid();
extern void lbBackupWrite();
extern sb32 lbBackupIsSramValid();
extern void lbBackupApplyOptions();
extern void lbBackupCorrectErrors();
extern void lbBackupClearNewcomers();
extern void lbBackupClear1PHighScore();
extern void lbBackupClearVSRecord();
extern void lbBackupClearBonusStageTime();
extern void lbBackupClearPrize();
extern void lbBackupClearAllData();

#endif
