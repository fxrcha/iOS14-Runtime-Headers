/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIDataMatrixCodeDescriptor : CIBarcodeDescriptor {

	NSData* errorCorrectedPayload;
	long long rowCount;
	long long columnCount;
	long long eccVersion;

}

@property (readonly) NSData * errorCorrectedPayload; 
@property (readonly) long long rowCount; 
@property (readonly) long long columnCount; 
@property (readonly) long long eccVersion; 
+(BOOL)supportsSecureCoding;
+(id)descriptorWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(long long)columnCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)eccVersion;
-(NSData *)errorCorrectedPayload;
-(id)initWithPayload:(id)arg1 rowCount:(long long)arg2 columnCount:(long long)arg3 eccVersion:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)rowCount;
@end
