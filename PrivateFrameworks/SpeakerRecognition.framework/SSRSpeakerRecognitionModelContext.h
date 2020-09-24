/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface SSRSpeakerRecognitionModelContext : NSObject {

	NSURL* _configFilePath;
	NSDictionary* _voiceProfilesModelFilePaths;

}

@property (nonatomic,readonly) NSURL * configFilePath;                                  //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceProfilesModelFilePaths;              //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
-(NSURL *)configFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(id)initWithConfigFilePath:(id)arg1 withModelFilePaths:(id)arg2 ;
@end
