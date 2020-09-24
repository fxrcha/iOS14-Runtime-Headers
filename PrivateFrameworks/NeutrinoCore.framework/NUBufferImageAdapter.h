/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBufferImage.h>

@protocol NUBufferProvider;
@class NUImageLayout, NURegion, NUColorSpace, NUPixelFormat, NSString;

@interface NUBufferImageAdapter : NSObject <NUBufferImage> {

	NUImageLayout* _layout;
	id<NUBufferProvider> _bufferProvider;
	NURegion* _validRegion;
	NUColorSpace* _colorSpace;

}

@property (readonly) NUImageLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace;                     //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion;                   //@synthesize validRegion=_validRegion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)format;
-(id)debugQuickLookObject;
-(id)init;
-(NUImageLayout *)layout;
-(SCD_Struct_NU7)size;
-(NURegion *)validRegion;
-(void)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)immutableImageCopy;
-(id)mutableImageCopy;
-(id)purgeableImageCopy;
-(id)mutablePurgeableImageCopy;
-(id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
@end
