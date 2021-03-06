/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTIDService <NSObject>
@required
-(id)IDFieldsForTopic:(id)arg1 options:(id)arg2;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeIDObserver:(id)arg1;
-(id)IDFieldsForTopic:(id)arg1 date:(id)arg2;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 date:(id)arg3 completion:(/*^block*/id)arg4;
-(id)observeIDForTopic:(id)arg1 type:(long long)arg2 usingBlock:(/*^block*/id)arg3;

@end

