/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCircle.h>

@protocol MKAnnotation;
@interface FMAccuracyOverlay : MKCircle {

	id<MKAnnotation> _parentAnnotation;
	double _horizontalAccuracy;

}

@property (assign,nonatomic,__weak) id<MKAnnotation> parentAnnotation;              //@synthesize parentAnnotation=_parentAnnotation - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                             //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(id)description;
-(id<MKAnnotation>)parentAnnotation;
-(void)setParentAnnotation:(id<MKAnnotation>)arg1 ;
@end
