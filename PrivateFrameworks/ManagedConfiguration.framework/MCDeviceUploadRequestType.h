/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadRequestType : NSObject <NSSecureCoding> {

	NSString* _code;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)code;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithCode:(id)arg1 name:(id)arg2 ;
@end

