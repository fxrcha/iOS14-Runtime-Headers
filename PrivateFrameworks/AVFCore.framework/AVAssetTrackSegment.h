/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding> {

	SCD_Struct_CM9 _timeMapping;

}

@property (nonatomic,readonly) SCD_Struct_CM9 timeMapping;              //@synthesize timeMapping=_timeMapping - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(BOOL)supportsSecureCoding;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM9)timeMapping;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)hash;
-(id)description;
@end
