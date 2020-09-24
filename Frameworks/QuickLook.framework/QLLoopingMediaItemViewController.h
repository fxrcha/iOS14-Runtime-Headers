/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLMediaItemBaseViewController.h>

@class AVQueuePlayer;

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {

	AVQueuePlayer* _queuePlayer;
	BOOL _addedObservers;

}
-(BOOL)play;
-(id)player;
-(BOOL)pause;
-(void)dealloc;
-(void)startObservingItem;
-(void)stopObservingItem;
-(void)setupPlayerWithMediaAsset:(id)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)previewDidAppear:(BOOL)arg1 ;
@end
