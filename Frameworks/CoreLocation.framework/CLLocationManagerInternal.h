/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManager, CLLocationManagerStateTracker, NSString, CLTimer, NSMutableSet, CLSilo;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManager* fManager;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CLTimer* fLocationRequestTimer;
	double fLocationRequestTimeout;
	CLTimer* fRangingRequestTimer;
	double fLastRangingRequestTimeout;
	unsigned long long fLastRangingRequestMachTime;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;
	NSMutableSet* fRangedConstraints;
	/*^block*/id fPlaceInferenceHandler;
	unsigned long long fFidelityPolicy;
	CLTimer* fPlaceInferenceTimer;
	CLSilo* fSilo;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
@property (nonatomic,readonly) NSMutableSet * rangedConstraints; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (assign,nonatomic,__weak) CLLocationManager * manager; 
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(NSMutableSet *)rangedRegions;
-(void)cancelRangingRequest;
-(void)invalidate;
-(void)cancelLingeringRangingRequest;
-(void)dealloc;
-(void)setManager:(CLLocationManager *)arg1 ;
-(BOOL)hasLingeringRangingRequest;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(CLLocationManager *)manager;
-(NSMutableSet *)rangedConstraints;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)performCourtesyPromptIfNeeded;
-(void)stopUpdatingLocationAutoPaused;
-(id<CLLocationManagerDelegate>)delegate;
-(BOOL)allowsBackgroundLocationUpdates;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 delegate:(id)arg4 silo:(id)arg5 ;
-(void)cancelLocationRequest;
-(int)PausesLocationUpdatesAutomatically;
@end
