/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSData, SSMetricsPageEvent, NSHTTPURLResponse, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {

	NSData* _bodyData;
	SSMetricsPageEvent* _metricsPageEvent;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,readonly) NSData * radio_decompressedBodyData; 
@property (nonatomic,readonly) BOOL ssv_isExpiredResponse; 
@property (nonatomic,readonly) NSData * databaseEncoding; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSString * storeCorrelationID; 
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                  //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) NSString * textEncodingName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)radio_decompressedBodyData;
-(long long)statusCode;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)MIMEType;
-(id)copyXPCEncoding;
-(id)allHeaderFields;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(NSData *)bodyData;
-(BOOL)ssv_isExpiredResponse;
-(void)dealloc;
-(NSString *)suggestedFilename;
-(NSURL *)URL;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(NSString *)storeCorrelationID;
-(SSMetricsPageEvent *)metricsPageEvent;
-(long long)expectedContentLength;
-(NSString *)textEncodingName;
-(NSData *)databaseEncoding;
@end
