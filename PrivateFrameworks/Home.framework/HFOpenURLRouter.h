/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFApplicationURLHandling;
@interface HFOpenURLRouter : NSObject {

	id<HFApplicationURLHandling> _applicationURLHandler;

}

@property (assign,nonatomic,__weak) id<HFApplicationURLHandling> applicationURLHandler;              //@synthesize applicationURLHandler=_applicationURLHandler - In the implementation block
+(id)sharedInstance;
-(id)openURL:(id)arg1 ;
-(id<HFApplicationURLHandling>)applicationURLHandler;
-(id)openSensitiveURL:(id)arg1 ;
-(void)_sendAnalyticsEventForURL:(id)arg1 ;
-(void)setApplicationURLHandler:(id<HFApplicationURLHandling>)arg1 ;
@end

