/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	long long _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_changeState;
-(void)animationDidStop:(id)arg1 ;
-(void)_fadeOut;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
@end
