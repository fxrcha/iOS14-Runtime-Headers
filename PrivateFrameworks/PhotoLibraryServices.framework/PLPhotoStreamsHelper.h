/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(id)sharedPhotoStreamsHelper;
+(BOOL)_photoStreamsEnabled;
+(id)iCloudServiceAccount;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(id)pause_mstreamd;
-(void)resume_mstreamd:(id)arg1 ;
-(long long)friendsLimit;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(void)clearCachedAccountState;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(id)psHashAsString:(id)arg1 ;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(long long)maxPixelSizeForDerivative;
-(void)dealloc;
-(id)psHashForData:(id)arg1 ;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(long long)imageLimitForFriendStream;
-(void)resetServerState;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(void)fetchMPSStateWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)lastPhotoStreamUpdateDate;
-(id)init;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)_clearPhotoStreamAccountSettings;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(long long)imageLimitForOwnStream;
-(void)pollForNewSubscriptionContent;
-(id)imageLimitsByAssetType;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(id)photoStreamsPublishStreamID;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)shouldPublishScreenShots;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(void)handleMPSStateIfNecessaryInLibrary:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
@end
