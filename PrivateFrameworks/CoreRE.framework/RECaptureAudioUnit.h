/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRE/CoreRE-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioPCMBuffer, AUAudioUnitBus, AUAudioUnitBusArray, NSString;

@interface RECaptureAudioUnit : AUAudioUnit {

	AVAudioPCMBuffer* _inputBuffer;
	AUAudioUnitBus* _inputBus;
	AUAudioUnitBusArray* _inputBusArray;
	AUAudioUnitBus* _outputBus;
	AUAudioUnitBusArray* _outputBusArray;
	shared_ptr<AudioStreamRecordingManager::StreamWriter>* _recordingStreamWriter;
	NSString* _captureName;

}

@property (nonatomic,copy) NSString * captureName;              //@synthesize captureName=_captureName - In the implementation block
-(id)channelCapabilities;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)deallocateRenderResources;
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(NSString *)captureName;
-(void)setCaptureName:(NSString *)arg1 ;
@end
