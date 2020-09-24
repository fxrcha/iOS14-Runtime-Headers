/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _watchdogBehavior;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	BOOL _runIndependently;

}

@property (assign,nonatomic) BOOL runIndependently;                                        //@synthesize runIndependently=_runIndependently - In the implementation block
@property (assign,nonatomic) long long watchdogBehavior;                                   //@synthesize watchdogBehavior=_watchdogBehavior - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)watchdogBehavior;
-(void)setWatchdogBehavior:(long long)arg1 ;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(void)setRunIndependently:(BOOL)arg1 ;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(BOOL)runIndependently;
@end
