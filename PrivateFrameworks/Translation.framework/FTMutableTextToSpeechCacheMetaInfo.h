/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechCacheMetaInfo.h>

@class FTTextToSpeechMeta, FTAudioDescription, NSString;

@interface FTMutableTextToSpeechCacheMetaInfo : FTTextToSpeechCacheMetaInfo

@property (nonatomic,copy) FTTextToSpeechMeta * meta_info; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) FTAudioDescription * decoder_description; 
@property (nonatomic,copy) FTAudioDescription * playback_description; 
@property (assign,nonatomic) int audio_length; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * original_session_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)audio_type;
-(void)setAudio_type:(long long)arg1 ;
-(BOOL)enable_word_timing_info;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(FTAudioDescription *)playback_description;
-(NSString *)text;
-(void)setDecoder_description:(FTAudioDescription *)arg1 ;
-(void)setPlayback_description:(FTAudioDescription *)arg1 ;
-(int)audio_length;
-(void)setAudio_length:(int)arg1 ;
-(NSString *)original_session_id;
-(void)setOriginal_session_id:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(FTAudioDescription *)decoder_description;
-(void)setMeta_info:(FTTextToSpeechMeta *)arg1 ;
-(id)init;
-(FTTextToSpeechMeta *)meta_info;
@end

