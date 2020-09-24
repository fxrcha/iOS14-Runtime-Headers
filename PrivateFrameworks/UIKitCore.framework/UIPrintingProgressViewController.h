/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

@interface UIPrintingProgressViewController : UITableViewController {

	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;

}
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)visible;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setDonePrinting:(BOOL)arg1 ;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3 ;
-(double)rotationDelay;
-(void)setMessage:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)doneProgress;
-(void)show;
@end
