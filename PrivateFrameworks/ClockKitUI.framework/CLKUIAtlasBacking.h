/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class NSData, CLKUIMmapFile, NSString;

@interface CLKUIAtlasBacking : NSObject {

	NSData* _data;
	CLKUIMmapFile* _mmapFile;
	NSString* _uuid;
	CLKUIAtlasBackingStructure* _structure;

}

@property (nonatomic,readonly) NSString * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned long long bytesLength; 
@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned long long planes; 
@property (nonatomic,readonly) unsigned long long planeLength; 
@property (nonatomic,readonly) unsigned long long bytesPerPixel; 
@property (nonatomic,readonly) unsigned long long mipCount; 
@property (nonatomic,readonly) unsigned char format; 
@property (nonatomic,readonly) BOOL mipmaps; 
@property (assign,nonatomic) unsigned char filter; 
@property (assign,nonatomic) unsigned char wrap; 
@property (nonatomic,readonly) CLKUIAtlasBackingStructure* structure;              //@synthesize structure=_structure - In the implementation block
+(id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 ;
+(id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(BOOL)arg3 ;
+(id)atlasBackingWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
+(id)atlasBackingWithBytes:(const void*)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4 ;
-(unsigned char)format;
-(unsigned char)filter;
-(unsigned char)wrap;
-(unsigned long long)width;
-(unsigned long long)bytesLength;
-(unsigned long long)height;
-(const void*)bytes;
-(unsigned long long)planes;
-(NSString *)uuid;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(void)setFilter:(unsigned char)arg1 ;
-(BOOL)mipmaps;
-(void)setWrap:(unsigned char)arg1 ;
-(unsigned long long)bytesPerPixel;
-(CLKUIAtlasBackingStructure*)structure;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 data:(id)arg3 ;
-(id)initWithUuid:(id)arg1 structure:(CLKUIAtlasBackingStructure*)arg2 mmapFile:(id)arg3 ;
-(unsigned long long)mipCount;
-(unsigned long long)planeLength;
@end

