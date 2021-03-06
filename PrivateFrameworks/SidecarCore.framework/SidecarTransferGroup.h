/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SidecarTransferGroup : NSObject {

	long long _completedItems;
	NSArray* _mutableItems;
	long long _type;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) long long type; 
-(NSArray *)items;
-(id)initWithMessage:(id)arg1 ;
-(BOOL)isComplete;
-(long long)type;
-(BOOL)handleMessage:(id)arg1 error:(id*)arg2 ;
@end

