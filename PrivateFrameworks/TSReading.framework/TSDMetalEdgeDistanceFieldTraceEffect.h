/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationRandomGenerator;
#import <TSReading/TSReading-Structs.h>
@class NSArray, TSDMetalTextureInfo, TSDMetalShader;

@interface TSDMetalEdgeDistanceFieldTraceEffect : NSObject {

	BOOL _canDraw;
	BOOL _didTeardown;
	long long _traceTextureMaxValue;
	CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
	NSArray* _strokeLineSegment;
	CFArrayRef _zeroesArray;
	CGSize _bufferSize;
	CGRect _viewportRect;
	SCD_Struct_TS75 _vertexUniforms;
	SCD_Struct_TS76 _fragmentUniforms;
	BOOL _isValid;
	TSDMetalTextureInfo* _edgeDistanceFieldTextureInfo;
	TSDMetalTextureInfo* _traceTextureInfo;
	TSDMetalShader* _shader;
	id<TSDAnimationRandomGenerator> _randomGenerator;
	CGPoint _randomStrokePoint;

}

@property (nonatomic,readonly) BOOL isValid;                                                    //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) TSDMetalTextureInfo * edgeDistanceFieldTextureInfo;              //@synthesize edgeDistanceFieldTextureInfo=_edgeDistanceFieldTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDMetalTextureInfo * traceTextureInfo;                          //@synthesize traceTextureInfo=_traceTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDMetalShader * shader;                                         //@synthesize shader=_shader - In the implementation block
@property (nonatomic,readonly) CGPoint randomStrokePoint;                                       //@synthesize randomStrokePoint=_randomStrokePoint - In the implementation block
@property (nonatomic,readonly) NSArray * strokeLineSegment;                                     //@synthesize strokeLineSegment=_strokeLineSegment - In the implementation block
@property (nonatomic,readonly) id<TSDAnimationRandomGenerator> randomGenerator;                 //@synthesize randomGenerator=_randomGenerator - In the implementation block
+(void)willBeginWithDevice:(id)arg1 ;
+(void)didEndWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)teardown;
-(TSDMetalShader *)shader;
-(BOOL)isValid;
-(id)description;
-(BOOL)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(BOOL)arg2 context:(id)arg3 randomGenerator:(id)arg4 ;
-(TSDMetalTextureInfo *)edgeDistanceFieldTextureInfo;
-(TSDMetalTextureInfo *)traceTextureInfo;
-(id)p_houghTransformWithZeroes:(CFArrayRef)arg1 bufferSize:(CGSize)arg2 ;
-(CGPoint)p_normalizedPointInTexturedRectangleFrameFromPoint:(CGPoint)arg1 inBufferSize:(CGSize)arg2 ;
-(void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char*)arg2 bufferSize:(CGSize)arg3 ;
-(void)p_addNearbyPixelsToArray:(CFArrayRef)arg1 pixel:(CGPoint)arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char*)arg4 tempDataBuffer:(char*)arg5 localMaximumLookupBuffer:(BOOL*)arg6 bufferSize:(CGSize)arg7 ;
-(id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(BOOL)arg4 context:(id)arg5 randomGenerator:(id)arg6 capabilities:(id)arg7 ;
-(void)drawWithContext:(id)arg1 andBuffer:(id)arg2 atPercent:(double)arg3 MVPMatrix:(CATransform3D)arg4 opacity:(double)arg5 color:(SCD_Struct_TS71)arg6 strokeFadeHardnessLeading:(double)arg7 strokeFadeHardnessTrailing:(double)arg8 ;
-(NSArray *)strokeLineSegment;
-(CGPoint)randomStrokePoint;
-(id<TSDAnimationRandomGenerator>)randomGenerator;
@end
