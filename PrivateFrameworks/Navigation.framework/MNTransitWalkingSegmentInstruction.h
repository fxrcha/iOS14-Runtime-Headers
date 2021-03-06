/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteSegment;

@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteSegment* _walkingSegment;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteSegment * walkingSegment;              //@synthesize walkingSegment=_walkingSegment - In the implementation block
+(id)instructionForWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;
-(id)initWithWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteSegment *)walkingSegment;
@end

