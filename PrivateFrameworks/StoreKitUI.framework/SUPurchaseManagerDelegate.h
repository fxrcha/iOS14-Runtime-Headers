/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUPurchaseManagerDelegate <NSObject>
@optional
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
-(void)purchaseManagerDidEndUpdates:(id)arg1;
-(void)purchaseManagerWillBeginUpdates:(id)arg1;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;

@end

