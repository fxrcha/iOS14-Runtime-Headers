/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStorePageSectionsDelegate <NSObject>
@optional
-(void)sectionsViewControllerDidScroll:(id)arg1;
-(void)sectionsViewController:(id)arg1 willScrollToOffset:(CGPoint)arg2 visibleRange:(SKUIIndexPathRange)arg3;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
-(BOOL)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
-(BOOL)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;

@end
