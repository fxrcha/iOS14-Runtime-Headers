/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSSet, EDAssetDownloadScheduler, NSString;

@interface EDMailDynamicDataAsset : NSObject <EFLoggable> {

	BOOL _shouldIgnoreUserAccountDomains;
	NSSet* _ignoredDomains;
	EDAssetDownloadScheduler* _scheduler;

}

@property (assign) BOOL shouldIgnoreUserAccountDomains;                         //@synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains - In the implementation block
@property (retain) NSSet * ignoredDomains;                                      //@synthesize ignoredDomains=_ignoredDomains - In the implementation block
@property (nonatomic,retain) EDAssetDownloadScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)_ignoredDomainsFallback;
-(void)setScheduler:(EDAssetDownloadScheduler *)arg1 ;
-(EDAssetDownloadScheduler *)scheduler;
-(id)init;
-(BOOL)shouldIgnoreDomain:(id)arg1 ;
-(BOOL)shouldIgnoreUserAccountDomains;
-(void)_updateIgnoredDomains:(id)arg1 ;
-(void)_queryForAssetWithCompletion:(/*^block*/id)arg1 ;
-(void)_downloadAssetCatalogWithCompletion:(/*^block*/id)arg1 ;
-(NSSet *)ignoredDomains;
-(void)setIgnoredDomains:(NSSet *)arg1 ;
-(void)_updateStateFromAsset:(id)arg1 ;
-(void)setShouldIgnoreUserAccountDomains:(BOOL)arg1 ;
@end
