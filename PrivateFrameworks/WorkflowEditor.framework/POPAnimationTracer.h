/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class POPAnimation, NSMutableArray, NSArray;

@interface POPAnimationTracer : NSObject {

	POPAnimation* _animation;
	POPAnimationState* _animationState;
	NSMutableArray* _events;
	BOOL _animationHasVelocity;
	BOOL _shouldLogAndResetOnCompletion;

}

@property (nonatomic,readonly) NSArray * allEvents; 
@property (nonatomic,readonly) NSArray * writeEvents; 
@property (assign,nonatomic) BOOL shouldLogAndResetOnCompletion;              //@synthesize shouldLogAndResetOnCompletion=_shouldLogAndResetOnCompletion - In the implementation block
-(NSArray *)allEvents;
-(void)reset;
-(void)start;
-(void)didStart;
-(void)stop;
-(id)initWithAnimation:(id)arg1 ;
-(void)updateFromValue:(id)arg1 ;
-(void)updateToValue:(id)arg1 ;
-(void)readPropertyValue:(id)arg1 ;
-(void)didReachToValue:(id)arg1 ;
-(void)updateVelocity:(id)arg1 ;
-(void)updateSpeed:(float)arg1 ;
-(void)updateBounciness:(float)arg1 ;
-(void)updateTension:(float)arg1 ;
-(void)updateFriction:(float)arg1 ;
-(void)updateMass:(float)arg1 ;
-(void)autoreversed;
-(void)writePropertyValue:(id)arg1 ;
-(void)didStop:(BOOL)arg1 ;
-(id)eventsWithType:(unsigned long long)arg1 ;
-(NSArray *)writeEvents;
-(BOOL)shouldLogAndResetOnCompletion;
-(void)setShouldLogAndResetOnCompletion:(BOOL)arg1 ;
@end

