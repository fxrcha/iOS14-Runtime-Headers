/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUSoftwareUpdateInternalResizingDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUResizableCellDelegate;
@class HUSoftwareUpdateInfoView, NSString, HFItem;

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol> {

	HUSoftwareUpdateInfoView* _infoView;
	id<HUResizableCellDelegate> _resizingDelegate;

}

@property (nonatomic,readonly) HUSoftwareUpdateInfoView * infoView;                            //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate;              //@synthesize resizingDelegate=_resizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HUSoftwareUpdateInfoView *)infoView;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id<HUResizableCellDelegate>)resizingDelegate;
-(void)setResizingDelegate:(id<HUResizableCellDelegate>)arg1 ;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1 ;
@end
