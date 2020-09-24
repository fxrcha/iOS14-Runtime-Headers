/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	BOOL mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) BOOL hasDuration; 
-(void)setHasDuration:(BOOL)arg1 ;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(BOOL)isAudioOnly;
-(BOOL)hasDuration;
-(void)setIsAudioOnly:(BOOL)arg1 ;
@end
