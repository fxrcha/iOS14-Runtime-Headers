/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@protocol PKProgressAlertControllerDelegate;
@interface PKProgressAlertController : UIAlertController {

	id<PKProgressAlertControllerDelegate> _delegate;
	double _progress;

}

@property (assign,nonatomic,__weak) id<PKProgressAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double progress;                                                    //@synthesize progress=_progress - In the implementation block
+(id)newProgressAlertControllerWithTitle:(id)arg1 cancel:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setProgress:(double)arg1 ;
-(void)setDelegate:(id<PKProgressAlertControllerDelegate>)arg1 ;
-(id<PKProgressAlertControllerDelegate>)delegate;
-(double)progress;
-(BOOL)_canShowWhileLocked;
@end

