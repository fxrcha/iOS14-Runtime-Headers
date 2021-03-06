/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDSoftwareUpdatesStore.h>

@interface AppStoreKit.UpdateStore : ASDSoftwareUpdatesStore {

	 notificationQueue;
	 coalesceUpdateNotifications;
	 notificationWorkItem;

}
-(void)broadcastChangeNotificationIfNotCoalescing;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end

