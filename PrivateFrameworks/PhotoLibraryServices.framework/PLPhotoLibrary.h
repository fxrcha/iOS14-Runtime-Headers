/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLGenericAlbum, NSSet, PLPhotoLibraryBundle, PLSimpleDCIMDirectory, PLManagedObjectContext, NSPersistentStore, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPhotoLibraryPathManager, PLLibraryServicesManager, NSString, PLPhotoLibraryOptions, PLKeywordManager, NSArray, PLThumbnailManager, PLThumbnailIndexes, PLGlobalValues;

@interface PLPhotoLibrary : NSObject {

	unsigned long long _pendingTransactions;
	NSMutableArray* _transactionCompletionHandlers;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	PLPhotoLibraryBundle* _libraryBundle;
	PLSimpleDCIMDirectory* _simpleDCIMDirectory;
	os_unfair_lock_s _managedObjectContextLock;
	PLManagedObjectContext* _managedObjectContext;
	NSPersistentStore* _loadedPersistentStore;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	PLPhotoLibraryPathManager* _pathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	NSString* _name;
	PLPhotoLibraryOptions* _options;

}

@property (readonly) PLPhotoLibraryBundle * libraryBundle;                                                   //@synthesize libraryBundle=_libraryBundle - In the implementation block
@property (readonly) PLKeywordManager * keywordManager; 
@property (nonatomic,retain,readonly) NSArray * syncedAlbums; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> syncProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> otaRestoreProgressAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> filesystemImportProgressAlbum; 
@property (nonatomic,readonly) PLPhotoLibraryOptions * options;                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;                                      //@synthesize pathManager=_pathManager - In the implementation block
@property (nonatomic,__weak,readonly) PLLibraryServicesManager * libraryServicesManager;                     //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                         //@synthesize name=_name - In the implementation block
@property (getter=isCloudPhotoLibraryEnabled,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) PAImageConversionServiceClient * imageConversionServiceClient; 
@property (nonatomic,readonly) PAVideoConversionServiceClient * videoConversionServiceClient; 
@property (nonatomic,readonly) PLThumbnailManager * thumbnailManager; 
@property (nonatomic,readonly) PLThumbnailIndexes * thumbnailIndexes; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
@property (nonatomic,readonly) PLGlobalValues * globalValues; 
+(void)initialize;
+(BOOL)isAudioFileExtension:(id)arg1 ;
+(void)_contextSaveFailedWithSQLiteError:(id)arg1 ;
+(id)savedPhotosReferenceMediaSizeWithSizeDataRef:(id)arg1 ;
+(id)myPhotoStreamPhotoLibrary;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromBundle:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2 ;
+(id)librarySummarySizeDataRefWithManagedObjectContext:(id)arg1 ;
+(void)_contextSaveFailedWithError:(id)arg1 ;
+(BOOL)isImageFileExtension:(id)arg1 ;
+(id)systemMainQueuePhotoLibrary;
+(BOOL)photoLibraryIsObtainable;
+(int)priorityForFileExtension:(id)arg1 ;
+(void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
+(id)cmmPhotoLibrary;
+(id)systemPhotoLibrary;
+(BOOL)isNonRawImageFileExtension:(id)arg1 ;
+(void)_loadFileExtensionInformation;
+(BOOL)shouldTryFastPathWithLibraryBundle:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(id)photoOutboundSharingTmpDirectoryURL;
+(void)setCloudAlbumSharingEnabled:(BOOL)arg1 ;
+(id)cameraPhotoLibrary;
+(BOOL)isVideoFileExtension:(id)arg1 ;
+(BOOL)isRawImageFileExtension:(id)arg1 ;
+(id)masterURLFromSidecarURLs:(id)arg1 ;
+(void)_contextSaveFailedDueToChangingSPL:(id)arg1 ;
+(id)unitTestPhotoLibrary;
+(BOOL)systemPhotoLibraryIsObtainable;
+(void)setPhotoStreamEnabled:(BOOL)arg1 ;
+(void)_contextSaveFailedWithTimeoutError:(id)arg1 ;
+(void)postGlobalPhotoLibraryAvailableIfNecessary;
+(id)savedPhotosOriginalsSizeWithSizeDataRef:(id)arg1 ;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2 ;
+(void)_getResourceData:(id)arg1 nonDerivativeSizeOut:(unsigned long long*)arg2 derivativesSizeOut:(unsigned long long*)arg3 fileBackedThumbnailsSizeOut:(unsigned long long*)arg4 tableThumbnailsSizeOut:(unsigned long long*)arg5 ;
+(BOOL)areOpportunisticTasksDisabled;
+(void)refreshCachedCountsAndDates:(BOOL)arg1 onAssetsContainerClass:(Class)arg2 inContext:(id)arg3 withPredicate:(id)arg4 ;
+(id)diagnosticsPhotoLibrary;
+(id)_resourcesInfoFromMoc:(id)arg1 ;
+(unsigned long long)CloudPhotoLibrarySize;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(id)cplPhotoLibrary;
+(void)_contextSaveFailedWithNoPersistentStores:(id)arg1 ;
+(void)_contextSaveFailedDueToClientRequestedShutdown:(id)arg1 ;
+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(void)_context:(id)arg1 saveFailedWithError:(id)arg2 ;
+(id)_internalSystemPhotoLibrary;
+(id)sharedPhotoLibrary;
+(id)cloudSharingPhotoLibrary;
+(BOOL)isAdjustmentEnvelopeExtension:(id)arg1 ;
+(BOOL)canSaveVideoToLibrary:(id)arg1 ;
+(id)newPhotoLibraryWithName:(const char*)arg1 loadedFromURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)assetsdClient;
-(id)photoAnalysisClient;
-(void)updateAssetPlayShareViewCountsInContext:(id)arg1 ;
-(void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3 mainFileMetadata:(id)arg4 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(PLManagedObjectContext *)managedObjectContext;
-(id)photoFromAssetURL:(id)arg1 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_photoLibraryCorruptNotification;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(PLGlobalValues *)globalValues;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1 ;
-(NSObject*<PLAlbumProtocol>)syncProgressAlbum;
-(void)performBlockAndWait:(/*^block*/id)arg1 forceSave:(BOOL)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 ;
-(void)performTransactionAndWaitWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(PLPhotoLibraryBundle *)libraryBundle;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairSingletonObjects;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(void)updateMemoryPlayShareViewCountsInContext:(id)arg1 ;
-(void)deleteExpiredTrashedResources;
-(void)userExpungeAssets:(id)arg1 ;
-(BOOL)hasCompletedRestorePostProcessing;
-(unsigned long long)sharedStreamsSize;
-(id)assetWithUUID:(id)arg1 ;
-(void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)handlePossibleCoreDataError:(id)arg1 ;
-(id)librarySizes;
-(PLPhotoLibraryOptions *)options;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)handlePersistentStoreRemoval:(id)arg1 ;
-(void)disableOpportunisticTasks;
-(void)countOfReferencedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(void)dealloc;
-(id)albumWithUuid:(id)arg1 ;
-(id)imageForFormat:(unsigned short)arg1 forAsset:(id)arg2 ;
-(BOOL)batchDeleteAssetsWithPredicate:(id)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(void)_safeSave:(id)arg1 ;
-(id)constraintsDirector;
-(void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1 ;
-(void)_enumerateFilesAtURLs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)recreateAlbumsAndPersonsFromMetadata;
-(void)_userDeleteAlbums:(id)arg1 ;
-(BOOL)hasITunesSyncedContent;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(void)_removeOldFaceMetadataAsync;
-(void)userTrashAssets:(id)arg1 ;
-(id)albumFromGroupURL:(id)arg1 ;
-(void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5 mainFileMetadata:(id)arg6 ;
-(id)initWithName:(const char*)arg1 libraryBundle:(id)arg2 options:(id)arg3 ;
-(id)lastImportedPhotosAlbum;
-(id)objectWithObjectID:(id)arg1 ;
-(void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
-(PLThumbnailManager *)thumbnailManager;
-(id)photoOutboundSharingTmpDirectoryURL;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(BOOL)_hasIncompleteAsset;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(void)_photoLibraryForceClientExitNotification;
-(BOOL)hasCompletedMomentAnalysis;
-(void)userExpungeAlbums:(id)arg1 ;
-(id)albumListForContentMode:(int)arg1 ;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(BOOL)isAlbumSynced:(id)arg1 ;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)cleanupIncompleteAssetsAfterOTARestore;
-(id)_initWithPathManager:(id)arg1 ;
-(void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
-(id)eventAlbumContainingPhoto:(id)arg1 ;
-(PLThumbnailIndexes *)thumbnailIndexes;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(id)syncedAlbumSubtitleStringFormat;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5 ;
-(id)init;
-(BOOL)deleteAllDiagnosticFiles:(id*)arg1 ;
-(id)_loadClientDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_loadClientDatabaseContextFastPathAndReturnAbortAfterOpen:(BOOL*)arg1 ;
-(id)newImageForPhoto:(id)arg1 format:(unsigned short)arg2 ;
-(void)deleteITunesSyncedContentForEnablingiCPL;
-(NSObject*<PLAlbumProtocol>)otaRestoreProgressAlbum;
-(void)createPhotoStreamAlbumWithStreamID:(id)arg1 ;
-(NSArray *)syncedAlbums;
-(unsigned long long)_dbFileSizes;
-(id)managedObjectContextStoreUUID;
-(id)_loadDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 name:(id)arg3 shouldSave:(BOOL)arg4 performTransaction:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)performTransactionWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)estimatedLibrarySizes;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(void)deleteExpiredTrashedAssetsAndAlbums;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(NSArray *)photoStreamAlbums;
-(void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1 includeAlbums:(BOOL)arg2 ;
-(NSArray *)photoStreamAlbumsForPreferences;
-(void)batchDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(unsigned long long)_fileSizeAtPath:(id)arg1 ;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(NSObject*<PLAlbumProtocol>)filesystemImportProgressAlbum;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(void)userUntrashAlbums:(id)arg1 ;
-(void)userUntrashAssets:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 mainFileMetadata:(id)arg2 toEvent:(id)arg3 sidecarFileInfo:(id)arg4 progress:(id)arg5 importSessionIdentifier:(id)arg6 isImported:(BOOL)arg7 previewImage:(id)arg8 thumbnailImage:(id)arg9 savedAssetType:(short)arg10 replacementUUID:(id)arg11 publicGlobalUUID:(id)arg12 extendedInfo:(id)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(BOOL)arg15 isPlaceholder:(BOOL)arg16 placeholderFileURL:(id)arg17 ;
-(void)_setManagedObjectContext:(id)arg1 ;
-(id)personInfoManager;
-(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 ;
-(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
-(BOOL)loadDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)batchDeleteObjectsWithEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(void)deleteUnknownDeferredIntermediates;
-(id)libraryID;
-(void)invalidateWithReason:(id)arg1 ;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(id)_loadServerDatabaseContextWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)iTunesSyncedContentInfo;
-(void)recreatePersonsFromMetadata;
-(id)_fetchedObjectsForDeleteWithEntity:(id)arg1 predicate:(id)arg2 batchSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 mainFileMetadata:(id)arg3 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(id)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(BOOL)hasPendingAssetsIgnoreiTunes:(BOOL)arg1 ;
-(PLKeywordManager *)keywordManager;
-(void)enableOpportunisticTasks;
-(id)librarySizesFromDB;
-(id)allImportedPhotosAlbum;
-(void)recreateMemoriesAndPersonsFromMetadata;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(id)simpleDCIMDirectory;
-(BOOL)safeSave:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(BOOL)isReadyForCloudPhotoLibrary;
-(void)clientApplicationWillEnterForeground;
-(void)_deleteObsoleteMetadataFiles;
-(BOOL)unloadDatabase:(id*)arg1 ;
-(id)incompleteRestoreProcesses;
-(id)description;
-(BOOL)_checkMomentAnalysisCompletion;
-(void)userTrashAlbums:(id)arg1 ;
-(id)queueStatusDescription;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2 ;
-(void)_enumerateFilesAtURL:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

