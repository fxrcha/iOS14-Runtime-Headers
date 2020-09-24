/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface CNLabeledBadge : UIView {

	UILabel* _label;
	double _height;
	CGSize _cachedTextSize;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,copy) UIColor * textColor; 
+(id)labeledBadgeWithText:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)cacheTextSizeIfNeeded;
-(void)invalidateCachedTextSize;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
@end
