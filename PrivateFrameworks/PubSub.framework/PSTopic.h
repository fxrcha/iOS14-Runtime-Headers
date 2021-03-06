/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, PSTopicManager;
@class NSMutableArray, NSMutableDictionary, NSString, NSArray, PSBroker, PSBrokerTransportCollection;

@interface PSTopic : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	NSMutableArray* _localSubscribersToSubscriptions;
	NSMutableDictionary* _remoteSubscribersToSubscriptions;
	NSString* _name;
	NSString* _logIdentifier;
	NSArray* _subscriptions;
	id<PSTopicManager> _topicManager;
	PSBroker* _broker;
	PSBrokerTransportCollection* _transportAdapter;

}

@property (copy,readonly) NSArray * subscriptions;                                //@synthesize subscriptions=_subscriptions - In the implementation block
@property (readonly) NSString * logIdentifier;                                    //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (__weak) id<PSTopicManager> topicManager;                               //@synthesize topicManager=_topicManager - In the implementation block
@property (__weak) PSBroker * broker;                                             //@synthesize broker=_broker - In the implementation block
@property (readonly) PSBrokerTransportCollection * transportAdapter;              //@synthesize transportAdapter=_transportAdapter - In the implementation block
@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)subscriptions;
-(id)attributeDescriptions;
-(void)unsubscribe:(id)arg1 ;
-(PSBroker *)broker;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)logIdentifier;
-(id<PSTopicManager>)topicManager;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setTopicManager:(id<PSTopicManager>)arg1 ;
-(id)initWithName:(id)arg1 broker:(id)arg2 ;
-(void)setBroker:(PSBroker *)arg1 ;
-(PSBrokerTransportCollection *)transportAdapter;
-(id)addSubscriptionWithFilters:(id)arg1 conditionals:(id)arg2 invocation:(id)arg3 ;
-(id)addRemoteSubscriptionWithFilters:(id)arg1 conditionals:(id)arg2 remoteDeviceIdentifier:(id)arg3 ;
-(void)publishEvent:(id)arg1 ;
-(void)republishEvent:(id)arg1 ;
@end

