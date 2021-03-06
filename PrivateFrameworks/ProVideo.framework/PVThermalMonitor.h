/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PVThermalMonitor : NSObject {

	BOOL _enabled;
	BOOL _hasGoneAboveNominal;
	int _currentThermalLevel;
	int _highestThermalLevel;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasGoneAboveNominal;                        //@synthesize hasGoneAboveNominal=_hasGoneAboveNominal - In the implementation block
@property (assign,nonatomic) int currentThermalLevel;                         //@synthesize currentThermalLevel=_currentThermalLevel - In the implementation block
@property (assign,nonatomic) int highestThermalLevel;                         //@synthesize highestThermalLevel=_highestThermalLevel - In the implementation block
@property (nonatomic,readonly) BOOL thermalLevelExceededNominal; 
@property (nonatomic,readonly) int thermalLevel; 
@property (nonatomic,readonly) int highestThermalLevelReached; 
@property (assign,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(int)thermalLevel;
-(BOOL)enabled;
-(id)init;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(int)currentThermalLevel;
-(void)setHighestThermalLevel:(int)arg1 ;
-(BOOL)_updateThermalLevelsWithToken:(int)arg1 ;
-(int)highestThermalLevel;
-(BOOL)_disabledThermalTracking;
-(BOOL)thermalLevelExceededNominal;
-(int)highestThermalLevelReached;
-(id)thermalLevelLabel;
-(BOOL)hasGoneAboveNominal;
-(void)setHasGoneAboveNominal:(BOOL)arg1 ;
-(void)_postNotificationPrevious:(int)arg1 new:(int)arg2 ;
-(void)_setCurrentThermalLevel:(int)arg1 ;
@end

