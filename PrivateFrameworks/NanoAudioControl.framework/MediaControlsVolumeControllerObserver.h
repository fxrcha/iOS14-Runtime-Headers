/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MediaControlsVolumeControllerObserver <NSObject>
@optional
-(void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(long long)arg3;
-(void)mediaControlsVolumeController:(id)arg1 didChangeHeadTrackedSpatialAudioEnabled:(BOOL)arg2;
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(long long)arg4;

@required
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2;

@end

