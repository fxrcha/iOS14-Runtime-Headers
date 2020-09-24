/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIDragFeedbackGeneratorConfiguration;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	long long _state;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_dragConfiguration,nonatomic,readonly) _UIDragFeedbackGeneratorConfiguration * dragConfiguration; 
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                                            //@synthesize state=_state - In the implementation block
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(void)userInteractionCancelled;
-(void)_setState:(long long)arg1 ;
-(void)_startPlayingContinuousFeedback;
-(long long)_state;
-(id)_dragConfiguration;
-(id)_playingContinuousFeedback;
-(void)dropTargetUpdated;
-(void)_stopPlayingContinuousFeedback;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)userInteractionEnded;
-(void)positionUpdated;
-(void)userInteractionStarted;
-(id)_stats_key;
-(void)_startPlayingContinuousFeedbackNow;
@end
