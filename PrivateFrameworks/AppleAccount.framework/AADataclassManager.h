/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface AADataclassManager : NSObject {

	ACAccountStore* _store;

}
+(id)sharedManager;
+(id)appBundleIdentifierDictionary;
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(id)whitelistedDataclassesForAppleAccountClassBasic;
-(id)whitelistedDataclassesForAppleAccountClassFull;
-(BOOL)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2 ;
-(BOOL)_isRestrictedForDataclass:(id)arg1 ;
-(id)appBundleIdentifierForDataclass:(id)arg1 ;
-(BOOL)_hideDataclassWhenAppRemoved:(id)arg1 ;
-(id)_userVisibleDataclasses;
-(id)_nonVisibleServiceDataclass;
-(BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1 ;
-(id)_filteredDataclassesForAccountClass:(id)arg1 ;
-(BOOL)_shouldProvisionNotesForAccount:(id)arg1 ;
-(id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2 ;
-(BOOL)isDataclassActionSafeForAutoEnablement:(id)arg1 ;
-(BOOL)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2 ;
-(id)blackListedMacOSDataclasses;
-(id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2 ;
-(void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

