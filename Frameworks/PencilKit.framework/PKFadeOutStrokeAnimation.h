/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, PKStroke;

@interface PKFadeOutStrokeAnimation : NSObject {

	UIColor* _startColor;
	PKStroke* _stroke;
	double _startTime;
	double _duration;

}

@property (nonatomic,readonly) PKStroke * stroke;              //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,readonly) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
-(PKStroke *)stroke;
-(double)duration;
-(double)startTime;
-(id)newStrokeAtTime:(double)arg1 ;
-(BOOL)isDoneAtTime:(double)arg1 ;
-(id)initWithStroke:(id)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end

