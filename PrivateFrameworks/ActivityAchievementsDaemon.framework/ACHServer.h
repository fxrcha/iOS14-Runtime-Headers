/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACHServerInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol ACHAwardingScheduler;
@class HDXPCClient, HDProfile, ACHTemplateStore, ACHEarnedInstanceStore, NSObject, ACHAchievementStore, ACHMobileAssetProvider, ACHTemplateSourceScheduler, NSString;

@interface ACHServer : NSObject <ACHServerInterface, _HKXPCExportable> {

	HDXPCClient* _client;
	HDProfile* _profile;
	ACHTemplateStore* _templateStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	NSObject*<ACHAwardingScheduler> _awardingScheduler;
	ACHAchievementStore* _achievementStore;
	ACHMobileAssetProvider* _mobileAssetProvider;
	ACHTemplateSourceScheduler* _templateSourceScheduler;

}

@property (nonatomic,retain) HDXPCClient * client;                                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) HDProfile * profile;                                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) ACHTemplateStore * templateStore;                                  //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,retain) ACHEarnedInstanceStore * earnedInstanceStore;                      //@synthesize earnedInstanceStore=_earnedInstanceStore - In the implementation block
@property (nonatomic,retain) NSObject*<ACHAwardingScheduler> awardingScheduler;                 //@synthesize awardingScheduler=_awardingScheduler - In the implementation block
@property (nonatomic,retain) ACHAchievementStore * achievementStore;                            //@synthesize achievementStore=_achievementStore - In the implementation block
@property (nonatomic,retain) ACHMobileAssetProvider * mobileAssetProvider;                      //@synthesize mobileAssetProvider=_mobileAssetProvider - In the implementation block
@property (nonatomic,retain) ACHTemplateSourceScheduler * templateSourceScheduler;              //@synthesize templateSourceScheduler=_templateSourceScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7 error:(id*)arg8 ;
+(id)serverWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4 mobileAssetProvider:(id)arg5 templateSourceScheduler:(id)arg6 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setClient:(HDXPCClient *)arg1 ;
-(void)setMobileAssetProvider:(ACHMobileAssetProvider *)arg1 ;
-(ACHMobileAssetProvider *)mobileAssetProvider;
-(void)connectionInvalidated;
-(void)setAwardingScheduler:(NSObject*<ACHAwardingScheduler>)arg1 ;
-(HDProfile *)profile;
-(id)exportedInterface;
-(void)setAchievementStore:(ACHAchievementStore *)arg1 ;
-(id)remoteInterface;
-(HDXPCClient *)client;
-(void)setTemplateSourceScheduler:(ACHTemplateSourceScheduler *)arg1 ;
-(ACHTemplateSourceScheduler *)templateSourceScheduler;
-(void)setEarnedInstanceStore:(ACHEarnedInstanceStore *)arg1 ;
-(ACHAchievementStore *)achievementStore;
-(NSObject*<ACHAwardingScheduler>)awardingScheduler;
-(ACHEarnedInstanceStore *)earnedInstanceStore;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)remote_fetchAllTemplatesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_addTemplate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeTemplate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeAllTemplatesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllEarnedInstancesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_addEarnedInstance:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeEarnedInstance:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_removeAllEarnedInstancesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAllAchievementsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_forceAwardingSchedulerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_runMonthlyChallengesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setActivityChallengeAssetsServerURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_availableMobileAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7 ;
@end
