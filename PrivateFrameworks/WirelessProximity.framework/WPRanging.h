/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPRangingDelegate;
@interface WPRanging : WPClient {

	id<WPRangingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPRangingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)clientAsString;
-(void)enableRanging:(BOOL)arg1 ;
-(void)invalidate;
-(void)stateDidChange:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<WPRangingDelegate>)arg1 ;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(id<WPRangingDelegate>)delegate;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
@end

