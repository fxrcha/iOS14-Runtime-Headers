/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding> {

	long long _result;
	NSData* _data;

}

@property (nonatomic,readonly) long long result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSData * data;                 //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(id)initWithResult:(long long)arg1 data:(id)arg2 ;
-(long long)result;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
