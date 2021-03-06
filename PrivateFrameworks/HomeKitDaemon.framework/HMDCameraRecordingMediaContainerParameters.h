/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _fragmentLength;

}

@property (nonatomic,copy,readonly) NSNumber * fragmentLength;              //@synthesize fragmentLength=_fragmentLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)fragmentLength;
-(id)initWithFragmentLength:(id)arg1 ;
@end

