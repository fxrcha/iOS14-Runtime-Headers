/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CNContact, NSDictionary;


@protocol PKPaymentOptionsProtocol <NSObject>
@property (nonatomic,retain) CNContact * defaultShippingAddress; 
@property (nonatomic,readonly) NSDictionary * defaultBillingAddresses; 
@property (nonatomic,retain) CNContact * defaultContactEmail; 
@property (nonatomic,retain) CNContact * defaultContactPhone; 
@property (nonatomic,retain) CNContact * defaultContactName; 
@required
-(CNContact *)defaultContactName;
-(id)defaultBillingAddressForPaymentPass:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
-(void)setDefaultContactName:(id)arg1;
-(NSDictionary *)defaultBillingAddresses;
-(CNContact *)defaultContactEmail;
-(void)setDefaultContactEmail:(id)arg1;
-(CNContact *)defaultContactPhone;
-(void)setDefaultContactPhone:(id)arg1;
-(CNContact *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(id)arg1;
-(id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;

@end
