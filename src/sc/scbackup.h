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
extern void scBackupBackupClearNewcomers(void);
extern void scBackupBackupClear1PHighScore(void);
extern void scBackupBackupClearVSRecord(void);
extern void scBackupBackupClearBonusStageTime(void);
extern void scBackupBackupClearPrize(void);
extern void scBackupBackupClearAllData(void);

#endif
