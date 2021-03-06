/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteSegment.h>

@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(BOOL)hasEnterStationManeuver;
-(BOOL)hasExitStationManeuver;
@end

