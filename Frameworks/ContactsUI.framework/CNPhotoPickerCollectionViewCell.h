/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, CAShapeLayer, UILabel, UIView;

@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell {

	BOOL _displaySelection;
	BOOL _displaysBorder;
	unsigned long long _cellStyle;
	NSUUID* _displaySessionUUID;
	CAShapeLayer* _selectionLayer;
	UILabel* _captionLabel;
	UIView* _containerView;
	UIView* _containerContentView;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;              //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UILabel * captionLabel;                     //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UIView * containerView;                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * containerContentView;              //@synthesize containerContentView=_containerContentView - In the implementation block
@property (assign,nonatomic) BOOL displaySelection;                      //@synthesize displaySelection=_displaySelection - In the implementation block
@property (assign,nonatomic) BOOL displaysBorder;                        //@synthesize displaysBorder=_displaysBorder - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;               //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
+(id)cellIdentifier;
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 forCellStyle:(unsigned long long)arg2 ;
+(double)cornerRadiusForBounds:(CGRect)arg1 forCellStyle:(unsigned long long)arg2 ;
-(unsigned long long)cellStyle;
-(UIView *)containerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)captionLabel;
-(void)setCaptionLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(void)updateWithView:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)updateWithCaption:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateCaptionFrame;
-(void)setDisplaysBorder:(BOOL)arg1 ;
-(void)updateBorderTintColor:(id)arg1 ;
-(BOOL)displaySelection;
-(void)clearContainerViewAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDisplaySelection:(BOOL)arg1 ;
-(BOOL)displaysBorder;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(UIView *)containerContentView;
-(void)setContainerContentView:(UIView *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setCellStyle:(unsigned long long)arg1 ;
@end
