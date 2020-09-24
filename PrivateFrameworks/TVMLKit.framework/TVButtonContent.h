/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>

@class UIColor, UIView, UIVisualEffectView, NSString, _TVImageView, UILabel, IKViewElement;

@interface TVButtonContent : _UIFloatingContentView {

	UIColor* __backgroundColor;
	BOOL _focused;
	BOOL _blurEnabled;
	BOOL _disabled;
	BOOL _imageTrailsTextContent;
	double _cornerRadius;
	UIView* _overlayView;
	UIVisualEffectView* _backdropView;
	long long _backdropStyle;
	NSString* _groupName;
	double _focusSizeIncrease;
	_TVImageView* _imageView;
	UILabel* _textContentView;
	_TVImageView* _accessoryView;
	UIColor* _highlightColor;
	IKViewElement* _viewElement;

}

@property (getter=isFocused,nonatomic,readonly) BOOL focused;                  //@synthesize focused=_focused - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) long long backdropStyle;                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,readonly) BOOL blurEnabled;                               //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSString * groupName;                             //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                         //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL imageTrailsTextContent;                      //@synthesize imageTrailsTextContent=_imageTrailsTextContent - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textContentView;                        //@synthesize textContentView=_textContentView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryView;                     //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                           //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)cornerRadius;
-(BOOL)isDisabled;
-(_TVImageView *)accessoryView;
-(UIView *)overlayView;
-(NSString *)groupName;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIVisualEffectView *)backdropView;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setAccessoryView:(_TVImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(id)backgroundColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(UIColor *)highlightColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(_TVImageView *)imageView;
-(long long)backdropStyle;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isFocused;
-(void)setBackgroundColor:(id)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(UILabel *)textContentView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setImageTrailsTextContent:(BOOL)arg1 ;
-(void)setTextContentView:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(BOOL)imageTrailsTextContent;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(BOOL)blurEnabled;
-(void)_setFocused:(BOOL)arg1 animationCoordinator:(id)arg2 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(double)_imageMarginFromText;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
@end
