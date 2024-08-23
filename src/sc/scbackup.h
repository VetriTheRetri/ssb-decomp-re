#ifndef _SCBACKUP_H_
#define _SCBACKUP_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <sc/scdef.h>

extern s32 scBackupCreateChecksum(scBackupData *bp);
extern sb32 scBackupIsChecksumValid(void);
extern void scBackupWrite(void);
extern sb32 scBackupIsSramValid(void);
extern void scBackupApplyOptions(void);
extern void scBackupCorrectErrors(void);
extern void scBackupClearNewcomers(void);
extern void scBackupClear1PHighScore(void);
extern void scBackupClearVSRecord(void);
extern void scBackupClearBonusStageTime(void);
extern void scBackupClearPrize(void);
extern void scBackupClearAllData(void);

#endif
