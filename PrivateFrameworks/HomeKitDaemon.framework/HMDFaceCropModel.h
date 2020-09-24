/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDate, HMBModelCloudReference;

@interface HMDFaceCropModel : HMBModel

@property (retain) NSData * faceBoundingBoxData; 
@property (retain) NSData * dataRepresentation; 
@property (retain) NSDate * dateCreated; 
@property (assign) CGRect faceBoundingBox; 
@property (retain) HMBModelCloudReference * person; 
+(id)hmbProperties;
+(id)hmbQueries;
+(id)faceCropsForPersonQuery;
+(id)faceCropsForAnyPersonQuery;
+(id)faceCropsForNoPersonQuery;
+(id)sentinelParentUUID;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(id)initWithFaceCrop:(id)arg1 ;
-(id)createFaceCrop;
-(id)createPersonFaceCrop;
@end
