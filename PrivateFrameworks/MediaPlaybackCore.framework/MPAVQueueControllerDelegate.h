/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVQueueControllerDelegate <NSObject>
@required
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
-(void)queueControllerDidChangeContents:(id)arg1;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;

@end
