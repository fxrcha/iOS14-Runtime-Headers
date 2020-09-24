/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIView;

@interface _SKUIClickThroughWindow : UIWindow {

	UIView* _interactionView;

}

@property (nonatomic,retain) UIView * interactionView;              //@synthesize interactionView=_interactionView - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)interactionView;
-(void)setInteractionView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
