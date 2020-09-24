/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPCPlaybackEngine, MPAVItem, MPQueuePlayer, MPVideoView, AVPictureInPictureController;


@protocol MPCPlaybackEngineImplementation <NSObject>
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine; 
@property (nonatomic,retain) id<MPAVQueueController> queueController; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPQueuePlayer * queuePlayer; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long stateBeforeInterruption; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController; 
@property (assign,nonatomic) BOOL wantsPictureInPicture; 
@property (assign,nonatomic) BOOL automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds; 
@property (assign,nonatomic) BOOL hasPlayedSuccessfully; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) long long actionAtQueueEnd; 
@optional
-(void)setCurrentTime:(double)arg1;
-(void)play;
-(void)playWithOptions:(unsigned long long)arg1;
-(void)pause;
-(void)endSeek;
-(void)beginSeek:(int)arg1;
-(void)togglePlayback;
-(void)pauseWithFadeout:(float)arg1;
-(BOOL)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(BOOL)arg3 force:(BOOL)arg4 error:(id*)arg5;
-(BOOL)setRate:(float)arg1 completion:(/*^block*/id)arg2;
-(void)beginUsingVideoLayer;
-(void)endUsingVideoLayer;
-(void)endPlayback;
-(void)skipWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endPlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)pauseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)beginScanningWithDirection:(long long)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)endScanningWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setRate:(float)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)togglePlaybackWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)skipWithDirectionShouldJumpToItemStart:(long long)arg1;
-(void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1;
-(void)loadSessionWithQueueController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<MPAVQueueController>)queueController;
-(MPAVItem *)currentItem;
-(long long)actionAtQueueEnd;
-(void)reloadWithPlaybackContext:(id)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)updateAudioSession;
-(BOOL)hasPlayedSuccessfully;
-(MPVideoView *)videoView;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(void)setWantsPictureInPicture:(BOOL)arg1;
-(double)currentTime;
-(MPQueuePlayer *)queuePlayer;
-(BOOL)wantsPictureInPicture;
-(long long)stateBeforeInterruption;
-(BOOL)automaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds;
-(void)setAutomaticallyHidesVideoLayersForMusicVideosWhenApplicationBackgrounds:(BOOL)arg1;
-(AVPictureInPictureController *)pictureInPictureController;
-(void)setActionAtQueueEnd:(long long)arg1;
-(long long)state;
-(void)setHasPlayedSuccessfully:(BOOL)arg1;
-(BOOL)becomeActiveWithError:(id*)arg1;
-(void)setQueueController:(id)arg1;

@end
