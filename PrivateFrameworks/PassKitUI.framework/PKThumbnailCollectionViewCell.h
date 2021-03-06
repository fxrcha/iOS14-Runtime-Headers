/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UILabel, NSString, UIImage, CNAvatarView;

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _imageView;
	UILabel* _labelTitle;
	NSString* _title;
	UIImage* _image;
	CNAvatarView* _avatarView;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
-(CNAvatarView *)avatarView;
-(NSString *)identifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupImageView:(id)arg1 ;
-(void)showAvatarView:(BOOL)arg1 ;
-(void)_resetFonts;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

