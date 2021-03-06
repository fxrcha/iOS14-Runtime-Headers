/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, UIView, NSNumberFormatter, UILabel, HUIStepSlider, NSString;

@interface HACCSlider : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIView* _subtitleContainer;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	unsigned long long _numberOfSteps;
	double _value;
	NSNumberFormatter* _numberFormatter;
	long long _style;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _statusLabel;
	HUIStepSlider* _slider;

}

@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                        //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                      //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) HUIStepSlider * slider;                                     //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSteps;                           //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityLabel;
-(HUIStepSlider *)slider;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(UILabel *)titleLabel;
-(BOOL)isAccessibilityElement;
-(void)setNumberOfSteps:(unsigned long long)arg1 ;
-(void)setModule:(unsigned long long)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setValue:(double)arg1 ;
-(long long)style;
-(void)setSlider:(HUIStepSlider *)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)enabled;
-(UILabel *)subtitleLabel;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(double)value;
-(id)accessibilityValue;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(id<HACCContentModuleDelegate>)delegate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)updateValue;
-(unsigned long long)numberOfSteps;
-(unsigned long long)module;
-(unsigned long long)accessibilityTraits;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andStyle:(long long)arg2 ;
-(id)contentValue;
-(void)sliderDidChange:(id)arg1 ;
-(void)updateValueString;
@end

