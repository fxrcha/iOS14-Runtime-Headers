/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FusionPluginServices.framework/FusionPluginServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FusionPluginServices/FusionPluginServices-Structs.h>
#import <FusionPluginKit/HSMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary, NSError;

@interface HSMessageResponse : HSMessage <NSSecureCoding, NSCopying> {

	NSString* _messageStr;
	NSNumber* _statusCode;
	NSDictionary* _responseDict;
	NSError* _error;
	NSString* _errorDescription;

}

@property (nonatomic,readonly) NSString * messageStr;                    //@synthesize messageStr=_messageStr - In the implementation block
@property (nonatomic,readonly) NSNumber * statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDict;              //@synthesize responseDict=_responseDict - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)errorDescription;
-(NSNumber *)statusCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)messageStr;
-(NSDictionary *)responseDict;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 ;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3 ;
-(id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3 andError:(id)arg4 ;
@end

