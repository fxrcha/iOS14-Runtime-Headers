/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber * currentAccessModeField; 
@property (retain) NSNumber * currentAccessModeChangeReasonField; 
@property (retain) NSDate * currentAccessModeChangeDate; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long currentAccessModeChangeReason; 
+(id)hmbProperties;
-(unsigned long long)currentAccessMode;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setCurrentAccessModeChangeReason:(unsigned long long)arg1 ;
-(unsigned long long)currentAccessModeChangeReason;
@end

