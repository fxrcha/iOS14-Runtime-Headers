/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AFSettingsConnection, NSObject;

@interface AFMyriadAdvertisementContextManager : NSObject {

	AFSettingsConnection* _settingsConnection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetSettingsConnection;
-(void)reset;
-(id)_settingsConnection;
@end

