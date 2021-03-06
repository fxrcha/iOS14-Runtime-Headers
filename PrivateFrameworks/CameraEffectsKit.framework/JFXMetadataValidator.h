/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface JFXMetadataValidator : NSObject {

	long long _faceDataDetectedFacesCount;
	unsigned long long _lastARFrameHasFaceAnchors;
	unsigned long long _lastARFrameIsFaceTracked;

}

@property (assign,nonatomic) long long faceDataDetectedFacesCount;                      //@synthesize faceDataDetectedFacesCount=_faceDataDetectedFacesCount - In the implementation block
@property (assign,nonatomic) unsigned long long lastARFrameHasFaceAnchors;              //@synthesize lastARFrameHasFaceAnchors=_lastARFrameHasFaceAnchors - In the implementation block
@property (assign,nonatomic) unsigned long long lastARFrameIsFaceTracked;               //@synthesize lastARFrameIsFaceTracked=_lastARFrameIsFaceTracked - In the implementation block
-(void)reset;
-(id)init;
-(void)validateARImageData:(id)arg1 ;
-(void)validateFaceTrackedARFrame:(id)arg1 ;
-(long long)faceDataDetectedFacesCount;
-(void)setFaceDataDetectedFacesCount:(long long)arg1 ;
-(unsigned long long)lastARFrameHasFaceAnchors;
-(void)setLastARFrameHasFaceAnchors:(unsigned long long)arg1 ;
-(unsigned long long)lastARFrameIsFaceTracked;
-(void)setLastARFrameIsFaceTracked:(unsigned long long)arg1 ;
@end

