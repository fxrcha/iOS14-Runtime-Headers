/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>

@class CBXpcConnection, CBPairingAgent, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {

	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	BOOL _tccComplete;
	long long _state;
	long long _authorization;
	NSData* _advertisingAddress;
	long long _advertisingAddressType;
	NSData* _nonConnectableAdvertisingAddress;
	long long _nonConnectableAdvertisingAddressType;
	NSString* _localAddressString;
	NSString* _localName;

}

@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long authorization;                                       //@synthesize authorization=_authorization - In the implementation block
@property (assign,nonatomic) BOOL tccComplete;                                              //@synthesize tccComplete=_tccComplete - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (nonatomic,copy) NSData * advertisingAddress;                                     //@synthesize advertisingAddress=_advertisingAddress - In the implementation block
@property (nonatomic,readonly) long long advertisingAddressType;                            //@synthesize advertisingAddressType=_advertisingAddressType - In the implementation block
@property (nonatomic,copy) NSData * nonConnectableAdvertisingAddress;                       //@synthesize nonConnectableAdvertisingAddress=_nonConnectableAdvertisingAddress - In the implementation block
@property (nonatomic,readonly) long long nonConnectableAdvertisingAddressType;              //@synthesize nonConnectableAdvertisingAddressType=_nonConnectableAdvertisingAddressType - In the implementation block
@property (readonly) NSString * localAddressString;                                         //@synthesize localAddressString=_localAddressString - In the implementation block
@property (readonly) NSString * localName;                                                  //@synthesize localName=_localName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorization;
+(BOOL)tccAvailable;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)tccComplete;
-(long long)nonConnectableAdvertisingAddressType;
-(NSString *)localName;
-(CBPairingAgent *)sharedPairingAgent;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)doneWithTCC;
-(void)xpcConnectionDidReset;
-(unsigned)getAppSDKVersion;
-(void)triggerBTErrorReport:(long long)arg1 ;
-(void)extractLocalDeviceStatesDictionary:(id)arg1 ;
-(NSData *)nonConnectableAdvertisingAddress;
-(void)xpcConnectionIsInvalid;
-(void)setAdvertisingAddress:(NSData *)arg1 ;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(void)setNonConnectableAdvertisingAddress:(NSData *)arg1 ;
-(BOOL)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(long long)advertisingAddressType;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2 ;
-(void)performTCCCheck:(id)arg1 ;
-(BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(NSString *)localAddressString;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(NSData *)advertisingAddress;
-(void)_handleAdvertisingAddressChanged:(id)arg1 ;
-(void)setAuthorization:(long long)arg1 ;
-(void)setTccComplete:(BOOL)arg1 ;
-(BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(long long)authorization;
-(id)initInternal;
-(void)dealloc;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end
