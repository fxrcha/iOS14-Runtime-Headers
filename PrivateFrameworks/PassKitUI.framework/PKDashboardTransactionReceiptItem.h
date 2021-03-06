/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKTransactionReceipt, PKPaymentTransaction, PKTransactionSource, PKAccount, NSString;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem> {

	PKTransactionReceipt* _receipt;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	PKAccount* _account;

}

@property (nonatomic,retain) PKTransactionReceipt * receipt;                       //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (nonatomic,retain) PKAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKAccount *)account;
-(void)setReceipt:(PKTransactionReceipt *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(PKTransactionReceipt *)receipt;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
@end

