/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject;

@interface RPHIDSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(void)invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

