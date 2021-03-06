/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, NSLayoutConstraint, UIView, UIImageView, _MKUILabel, MKMapItemView, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	UIView* _mapView;
	UIImageView* _mapImageView;
	_MKUILabel* _titleLabel;
	MKMapItemView* _mapItemView;

}

@property (nonatomic,retain) UIImage * map; 
@property (nonatomic,retain) MKMapItemView * mapItemView;                                          //@synthesize mapItemView=_mapItemView - In the implementation block
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(UIImage *)map;
-(double)titleHeight;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasTitle;
-(void)setMap:(UIImage *)arg1 ;
-(void)infoCardThemeChanged;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
-(MKMapItemView *)mapItemView;
-(double)mapViewHeight;
-(BOOL)isBottomHairlineHidden;
-(BOOL)useImageView;
-(void)setMapItemView:(MKMapItemView *)arg1 ;
@end

