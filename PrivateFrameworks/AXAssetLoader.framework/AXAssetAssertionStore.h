/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXAssetLoader/AXAssetLoader-Structs.h>
@class NSUserDefaults;

@interface AXAssetAssertionStore : NSObject {

	os_unfair_lock_s _lock;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)store;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)_init;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)_mutateAssertionsForAssetType:(id)arg1 assertions:(id)arg2 mutationBlock:(/*^block*/id)arg3 ;
-(void)_mutateAssetAssertions:(/*^block*/id)arg1 ;
-(void)requestAssertion:(id)arg1 ;
-(void)discardAssertion:(id)arg1 ;
-(void)discardAllAssertionsOfType:(id)arg1 heldByClient:(id)arg2 ;
-(void)discardAllAssertionsOfType:(id)arg1 ;
-(id)heldAssertionsForAssetType:(id)arg1 ;
@end
