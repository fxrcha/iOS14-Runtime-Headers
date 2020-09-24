/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCapturePhotoInternal, NSDictionary, AVDepthData, AVPortraitEffectsMatte, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings, NSString;

@interface AVCapturePhoto : NSObject {

	AVCapturePhotoInternal* _internal;

}

@property (readonly) SCD_Struct_AV0 timestamp; 
@property (getter=isRawPhoto,readonly) BOOL rawPhoto; 
@property (readonly) CVBufferRef pixelBuffer; 
@property (readonly) CVBufferRef previewPixelBuffer; 
@property (readonly) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (readonly) AVDepthData * depthData; 
@property (readonly) AVPortraitEffectsMatte * portraitEffectsMatte; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (readonly) long long photoCount; 
@property (readonly) NSString * sourceDeviceType; 
+(void)initialize;
+(id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned)arg2 unresolvedSettings:(id)arg3 ;
-(long long)sequenceCount;
-(AVPortraitEffectsMatte *)portraitEffectsMatte;
-(long long)lensStabilizationStatus;
-(CGImageRef)previewCGImageRepresentation;
-(unsigned)_orientation;
-(BOOL)isRawPhoto;
-(unsigned)expectedPhotoProcessingFlags;
-(NSDictionary *)metadata;
-(NSString *)sourceDeviceType;
-(id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 exceptionReason:(id*)arg9 ;
-(id)debugDescription;
-(void)dealloc;
-(SCD_Struct_AV0)timestamp;
-(long long)photoCount;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(id)fileDataRepresentationWithCustomizer:(id)arg1 ;
-(id)processedFileType;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(id)portraitMetadata;
-(CVBufferRef)_embeddedThumbnailSourcePixelBuffer;
-(CVBufferRef)previewPixelBuffer;
-(id)semanticSegmentationMatteForType:(id)arg1 ;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(id)bracketSettings;
-(AVDepthData *)depthData;
-(id)initWithTimestamp:(SCD_Struct_AV0)arg1 photoSurface:(IOSurfaceRef)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(IOSurfaceRef)arg5 embeddedThumbnailSourceSurface:(IOSurfaceRef)arg6 metadata:(id)arg7 depthDataSurface:(IOSurfaceRef)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(IOSurfaceRef)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(IOSurfaceRef)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(IOSurfaceRef)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(IOSurfaceRef)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 captureRequest:(id)arg18 bracketSettings:(id)arg19 sequenceCount:(unsigned long long)arg20 photoCount:(unsigned long long)arg21 expectedPhotoProcessingFlags:(unsigned)arg22 sourceDeviceType:(id)arg23 ;
-(id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(CVBufferRef)arg3 replacementDepthData:(id)arg4 ;
-(CVBufferRef)pixelBuffer;
-(unsigned)actualPhotoProcessingFlags;
-(id)privateClientMetadata;
-(id)livePhotoMovieFileURL;
-(unsigned)photoProcessingFlags;
-(CGImageRef)CGImageRepresentation;
-(id)description;
-(id)fileDataRepresentation;
@end
