/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIContactManaging.h>

@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging> {

	NSUUID* contactCollectionUUID;

}

@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedTIContactManager;
+(void)setSharedTIContactManager:(id)arg1 ;
-(void)unload;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(NSUUID *)contactCollectionUUID;
@end

