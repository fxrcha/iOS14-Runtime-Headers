/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NUJSRAWNoiseReductionProperties;


@protocol NUJSRAWImagePropertiesExport <JSExport>
@property (readonly) NSString * decoderVersion; 
@property (readonly) double temperature; 
@property (readonly) double tint; 
@property (readonly) NUJSRAWNoiseReductionProperties * noiseReductionProperties; 
@required
-(double)temperature;
-(double)tint;
-(NSString *)decoderVersion;
-(NUJSRAWNoiseReductionProperties *)noiseReductionProperties;

@end
