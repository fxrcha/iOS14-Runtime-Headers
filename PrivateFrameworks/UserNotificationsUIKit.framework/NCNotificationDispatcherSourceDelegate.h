/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationDispatcherSourceDelegate <NSObject>
@required
-(void)dispatcher:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)dispatcher:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
-(void)dispatcher:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3;

@end

