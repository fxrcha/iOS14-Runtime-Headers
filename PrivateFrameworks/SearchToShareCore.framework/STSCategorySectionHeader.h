/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIButton, NSString;

@interface STSCategorySectionHeader : UIView {

	UILabel* _titleLabel;
	UIButton* _clearButton;
	BOOL _clearButtonHidden;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL clearButtonHidden;              //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
-(NSString *)title;
-(void)layoutSubviews;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(BOOL)clearButtonHidden;
@end
