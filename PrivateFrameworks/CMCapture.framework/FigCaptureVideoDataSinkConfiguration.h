/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateVideoFrames;
	BOOL _derivedFromPreview;

}

@property (assign,nonatomic) BOOL discardsLateVideoFrames;              //@synthesize discardsLateVideoFrames=_discardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL derivedFromPreview;                   //@synthesize derivedFromPreview=_derivedFromPreview - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)derivedFromPreview;
-(BOOL)discardsLateVideoFrames;
-(BOOL)isEqual:(id)arg1 ;
-(int)sinkType;
-(void)setDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setDerivedFromPreview:(BOOL)arg1 ;
-(id)description;
@end

