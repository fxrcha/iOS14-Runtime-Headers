/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSMutableDictionary;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;

}
+(id)sharedManager;
+(id)defaultItemValueClasses;
-(id)init;
-(id)itemValueClassesForKeyPath:(id)arg1 ;
-(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
@end

