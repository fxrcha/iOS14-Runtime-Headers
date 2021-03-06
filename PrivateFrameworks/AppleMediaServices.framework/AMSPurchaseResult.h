/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, AMSPurchase, NSDictionary;

@interface AMSPurchaseResult : NSObject {

	NSString* _correlationID;
	NSError* _error;
	AMSPurchase* _purchase;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy) NSString * correlationID;                       //@synthesize correlationID=_correlationID - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) AMSPurchase * purchase;                         //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSDictionary *)responseDictionary;
-(AMSPurchase *)purchase;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCorrelationID:(NSString *)arg1 ;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSString *)correlationID;
@end

