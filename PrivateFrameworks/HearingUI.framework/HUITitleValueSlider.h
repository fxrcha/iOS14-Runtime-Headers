/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUIStepSlider, UILabel, UIVisualEffectView;

@interface HUITitleValueSlider : UIView {

	HUIStepSlider* _slider;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) HUIStepSlider * slider;                       //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                         //@synthesize valueLabel=_valueLabel - In the implementation block
-(UIVisualEffectView *)effectView;
-(HUIStepSlider *)slider;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)isAccessibilityElement;
-(id)initWithEffect:(id)arg1 ;
-(void)setSlider:(HUIStepSlider *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(UILabel *)valueLabel;
-(unsigned long long)accessibilityTraits;
-(void)setValueLabel:(UILabel *)arg1 ;
@end

