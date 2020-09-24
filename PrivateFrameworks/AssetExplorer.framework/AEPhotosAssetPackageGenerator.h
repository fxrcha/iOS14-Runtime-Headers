/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AEAssetPackageGenerator.h>
#import <libobjc.A.dylib/NSProgressReporting.h>
#import <libobjc.A.dylib/PUReviewAssetProviderRequest.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSProgress, PXAssetReference, NSObject, PHAssetExportRequest, AEAssetPackage, NSError, PHAsset, NSString;

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest> {

	PXAssetReference* _sourceAssetReference;
	NSObject*<OS_dispatch_queue> __packagerIvarIsolationQueue;
	NSObject*<OS_dispatch_group> __packagerWorkGroup;
	PHAssetExportRequest* __exportRequest;
	AEAssetPackage* __ivarQueue_currentPackage;
	NSError* __ivarQueue_lastError;
	PHAsset* __asset;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _packagerIvarIsolationQueue;                                  //@synthesize _packagerIvarIsolationQueue=__packagerIvarIsolationQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> _packagerWorkGroup;                                           //@synthesize _packagerWorkGroup=__packagerWorkGroup - In the implementation block
@property (nonatomic,readonly) PHAssetExportRequest * _exportRequest;                                                     //@synthesize _exportRequest=__exportRequest - In the implementation block
@property (setter=_setIvarQueueCurrentPackage:,nonatomic,retain) AEAssetPackage * _ivarQueue_currentPackage;              //@synthesize _ivarQueue_currentPackage=__ivarQueue_currentPackage - In the implementation block
@property (setter=_setIvarQueueLastError:,nonatomic,retain) NSError * _ivarQueue_lastError;                               //@synthesize _ivarQueue_lastError=__ivarQueue_lastError - In the implementation block
@property (nonatomic,retain) PHAsset * _asset;                                                                            //@synthesize _asset=__asset - In the implementation block
@property (nonatomic,copy,readonly) PXAssetReference * sourceAssetReference;                                              //@synthesize sourceAssetReference=_sourceAssetReference - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PUDisplayAsset> sourceAsset; 
-(id)initWithAsset:(id)arg1 ;
-(PHAsset *)_asset;
-(id)initWithAssetReference:(id)arg1 ;
-(NSProgress *)progress;
-(void)requestReviewAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<PUDisplayAsset>)sourceAsset;
-(void)cancelReviewAssetRequest;
-(void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg1 assetReference:(id)arg2 ;
-(id)beginGenerating;
-(BOOL)retrieveGeneratedPackageWithCompletion:(/*^block*/id)arg1 ;
-(void)_callCompletionWithResult:(/*^block*/id)arg1 ;
-(void)_generatePackageWithAssetExportFileURLs:(id)arg1 error:(id)arg2 ;
-(id)_generatePackageFromAsset:(id)arg1 ;
-(id)_createOutputDirectoryBaseURLWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_copyItemAtURL:(id)arg1 toOutputDirectory:(id)arg2 error:(id*)arg3 ;
-(id)_copyAssetExportFileURLs:(id)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(id)_assetPackageforPHAsset:(id)arg1 withAssetExportRequestFileURLs:(id)arg2 error:(id*)arg3 ;
-(PXAssetReference *)sourceAssetReference;
-(NSObject*<OS_dispatch_queue>)_packagerIvarIsolationQueue;
-(NSObject*<OS_dispatch_group>)_packagerWorkGroup;
-(PHAssetExportRequest *)_exportRequest;
-(AEAssetPackage *)_ivarQueue_currentPackage;
-(void)_setIvarQueueCurrentPackage:(id)arg1 ;
-(NSError *)_ivarQueue_lastError;
-(void)_setIvarQueueLastError:(id)arg1 ;
-(void)set_asset:(PHAsset *)arg1 ;
@end
