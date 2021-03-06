/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrightnessControl/BCBrtControl.h>

@protocol OS_dispatch_queue;
@class HIDDevice, HIDElement, NSObject;

@interface BCHIDBrtControl : BCBrtControl {

	unsigned _hidBrightnessService;
	HIDDevice* _hidBrightnessDevice;
	HIDElement* _brightnessElement;
	HIDElement* _brightnessFadeElement;
	float _nitsScaler;
	double _nits;
	float _brightnessUpdateTarget;
	unsigned long long _brighntessUpdateCounter;
	NSObject*<OS_dispatch_queue> _brightnessUpdateQueue;
	unsigned long long _registryID;

}

@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
+(id)_copyLogHandleName;
-(id)initWithService:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned long long)registryID;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)_getDeviceNits:(double*)arg1 ;
-(BOOL)_setDeviceNits:(double)arg1 ;
@end

