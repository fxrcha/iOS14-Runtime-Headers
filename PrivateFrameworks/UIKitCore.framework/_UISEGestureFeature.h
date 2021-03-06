/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UISEGestureFeatureDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UISEGestureFeature : NSObject {

	id<_UISEGestureFeatureDelegate> _delegate;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<_UISEGestureFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
-(void)_setState:(unsigned long long)arg1 ;
-(id)debugDictionary;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
-(void)setDelegate:(id<_UISEGestureFeatureDelegate>)arg1 ;
-(id<_UISEGestureFeatureDelegate>)delegate;
-(unsigned long long)state;
-(void)incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
@end

