/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface STSSuggestionFooter : UIView {

	UIImageView* _imageView;
	UIImage* _searchProviderImage;

}

@property (nonatomic,retain) UIImage * searchProviderImage;              //@synthesize searchProviderImage=_searchProviderImage - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)searchProviderImage;
-(void)setSearchProviderImage:(UIImage *)arg1 ;
@end
