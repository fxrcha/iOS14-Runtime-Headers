/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

@interface AUV2BridgeBus : AUAudioUnitBus {

	AUAudioUnitV2Bridge* _owner;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _scope;
	unsigned _element;

}
-(id)format;
-(id)initWithOwner:(id)arg1 au:(OpaqueAudioComponentInstanceRef)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
@end
