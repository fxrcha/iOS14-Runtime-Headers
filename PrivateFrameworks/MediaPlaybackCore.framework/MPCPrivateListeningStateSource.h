/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _overrideValue;
	NSNumber* _currentValue;

}

@property (nonatomic,copy,readonly) NSNumber * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) NSNumber * overrideValue;                      //@synthesize overrideValue=_overrideValue - In the implementation block
@property (nonatomic,readonly) long long sourceType; 
+(BOOL)supportsSecureCoding;
+(id)localDeviceSource;
+(id)staticSourceWithValue:(id)arg1 ;
+(id)sourceWithUserIdentity:(id)arg1 ;
-(long long)sourceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)currentValue;
-(id)_init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)overrideValue;
-(void)setOverrideValue:(NSNumber *)arg1 ;
@end
