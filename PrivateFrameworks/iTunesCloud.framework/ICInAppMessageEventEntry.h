/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _messageIdentifier;
	NSDictionary* _params;
	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) NSString * messageIdentifier;              //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * params;                     //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) NSString * eventIdentifier;                //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)params;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 eventIdentifier:(id)arg3 ;
-(NSString *)messageIdentifier;
-(id)initWithMessageIdentifier:(id)arg1 params:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)eventIdentifier;
@end

