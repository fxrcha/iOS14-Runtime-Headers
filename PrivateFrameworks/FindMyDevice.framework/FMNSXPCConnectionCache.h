/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FMNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSMutableDictionary* _connectionsByServiceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;                //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionsByServiceName;              //@synthesize connectionsByServiceName=_connectionsByServiceName - In the implementation block
+(id)sharedCache;
-(id)resumeConnectionWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSMutableDictionary *)connectionsByServiceName;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionsByServiceName:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
@end
