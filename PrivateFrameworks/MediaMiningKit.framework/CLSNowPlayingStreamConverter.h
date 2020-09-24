/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSNowPlayingStreamConverter : NSObject {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(unsigned long long)defaultOptions;
+(id)recognizedMusicSources;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(id)init;
-(id)eventsFromDuetKnowledgeEvents:(id)arg1 ;
-(id)eventFromDuetKnoweledgeEvent:(id)arg1 ;
-(BOOL)_canUseEvent:(id)arg1 ;
@end
