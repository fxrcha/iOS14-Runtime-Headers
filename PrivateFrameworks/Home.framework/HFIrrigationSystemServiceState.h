/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFServiceState.h>

@interface HFIrrigationSystemServiceState : HFServiceState {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(unsigned long long)_typeForActiveState:(BOOL)arg1 usageState:(long long)arg2 programMode:(long long)arg3 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
-(id)initWithBatchReadResponse:(id)arg1 ;
-(unsigned long long)type;
-(long long)priority;
-(long long)primaryState;
-(id)stateTypeIdentifier;
@end

