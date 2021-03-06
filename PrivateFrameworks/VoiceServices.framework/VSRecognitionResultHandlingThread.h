/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionResultHandlingThreadDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSMutableArray, NSConditionLock;

@interface VSRecognitionResultHandlingThread : NSObject {

	id<VSRecognitionResultHandlingThreadDelegate> _delegate;
	NSMutableArray* _requests;
	NSConditionLock* _lock;
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	}  _resultHandlingFlags;

}
-(void)invalidate;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
@end

