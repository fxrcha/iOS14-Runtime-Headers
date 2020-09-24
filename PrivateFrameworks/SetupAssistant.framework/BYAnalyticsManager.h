/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject {

	NSMutableArray* _events;
	NSMutableDictionary* _lazyEvents;

}

@property (nonatomic,retain) NSMutableArray * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lazyEvents;              //@synthesize lazyEvents=_lazyEvents - In the implementation block
+(id)sharedManager;
-(void)commit;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)stash:(id)arg1 ;
-(void)reset;
-(id)init;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 persist:(BOOL)arg3 ;
-(void)removeEventsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)lazyEvents;
-(void)_sendEvent:(id)arg1 payload:(id)arg2 ;
-(void)_gatherDataFromProducers;
-(void)addEvent:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 persist:(BOOL)arg3 ;
-(void)removeNonPersistentEvents;
-(void)setLazyEvents:(NSMutableDictionary *)arg1 ;
@end
