/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCGamepadEventSource.h>

@class _GCGamepadEventKeyboardEventAdapterConfig, NSArray, NSString;

@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource> {

	id _observation;
	_GCGamepadEventKeyboardEventAdapterConfig* _config;
	NSArray* _observers;

}

@property (copy) NSArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observers;
-(void)setObservers:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)observeGamepadEvents:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 source:(id)arg2 ;
@end
