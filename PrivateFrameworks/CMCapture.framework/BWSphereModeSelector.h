/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWSphereModeSelector : NSObject {

	CFStringRef _currentSphereMode;
	float _maximumFrameRate;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	BOOL _enablesSphereWhenAvailable;
	BOOL _motionDataInvalid;
	BOOL _lowPowerSphereModeEnabled;
	BOOL _stillPreviewActiveSupported;
	BOOL _zeroShutterLagEnabled;
	int _sphereThermalLevel;
	BOOL _tripodModeEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _overCaptureEnabled;
	BOOL _variableFrameRateVideoEnabled;

}

@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL lowPowerSphereModeEnabled; 
@property (assign,nonatomic) int systemThermalLevel; 
@property (assign,nonatomic) BOOL tripodModeEnabled; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled; 
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(CFStringRef)currentSphereMode;
-(BOOL)variableFrameRateVideoEnabled;
-(BOOL)avoidsSphereRecentering;
-(BOOL)sphereVideoSupported;
-(float)maximumFrameRate;
-(void)_updateSphereMode;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(BOOL)overCaptureEnabled;
-(BOOL)sphereVideoEnabled;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)tripodModeEnabled;
-(void)setSystemThermalLevel:(int)arg1 ;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerSphereModeEnabled;
-(int)systemThermalLevel;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
@end

