//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDMMCS, CKSQLitePool, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CKDAssetCache : NSObject
{
    BOOL _isUnitTestingAccount;
    BOOL _isEvictionScheduled;
    CKDMMCS *_MMCS;
    CKSQLitePool *_dbPool;
    NSString *_applicationBundleID;
    NSString *_dbPath;
    NSString *_fileDownloadPath;
    NSString *_packageDownloadPath;
    NSString *_packageUploadPath;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_expiryTimer;
    int _fileDownloadPathFd;
}

+ (int)openFdForDownloadPath:(id)arg1 error:(id *)arg2;
+ (id)_sharedCachesByBundleID;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 shouldEvictOnCreation:(BOOL)arg6;
@property(nonatomic) int fileDownloadPathFd; // @synthesize fileDownloadPathFd=_fileDownloadPathFd;
@property(retain, nonatomic) NSString *packageUploadPath; // @synthesize packageUploadPath=_packageUploadPath;
@property(retain, nonatomic) NSString *packageDownloadPath; // @synthesize packageDownloadPath=_packageDownloadPath;
@property(retain, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)arg1;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)_evictPackagesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 forced:(BOOL)arg2 evictNow:(BOOL)arg3;
- (unsigned long long)_evictDownloadedFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
@property BOOL isEvictionScheduled; // @synthesize isEvictionScheduled=_isEvictionScheduled;
- (void)_unregisterItemIDs:(id)arg1;
- (void)_scheduleExpirationForAssetHandles;
- (void)_scheduleEvictionForDownloadedFiles;
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_saveData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) CKSQLitePool *dbPool; // @synthesize dbPool=_dbPool;
- (void)expireAssetHandlesIfNecessary;
- (void)_expireAssetHandlesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_evictFilesForced:(BOOL)arg1 evictNow:(BOOL)arg2;
- (id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5;
- (BOOL)startTrackingAssetHandles:(id)arg1 error:(id *)arg2;
- (int)openFileDescriptorForItemID:(unsigned long long)arg1 itemType:(id *)arg2 error:(id *)arg3;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
- (unsigned long long)clearForced:(BOOL)arg1;
- (unsigned long long)evictAllFilesForced:(BOOL)arg1;
- (void)cancelExpiryTimer;
@property(nonatomic) __weak CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *expiryTimer; // @synthesize expiryTimer=_expiryTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;

@end

