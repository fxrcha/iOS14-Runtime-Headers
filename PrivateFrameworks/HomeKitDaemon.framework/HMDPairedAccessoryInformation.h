/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDAccessoryBrowserDelegate;
@class NSString, NSData;

@interface HMDPairedAccessoryInformation : NSObject {

	NSString* _identifier;
	NSData* _setupHash;
	unsigned long long _transports;
	id<HMDAccessoryBrowserDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSData * setupHash;                                           //@synthesize setupHash=_setupHash - In the implementation block
@property (readonly) unsigned long long transports;                                //@synthesize transports=_transports - In the implementation block
@property (__weak,readonly) id<HMDAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)identifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)transports;
-(id<HMDAccessoryBrowserDelegate>)delegate;
-(unsigned long long)hash;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4 ;
@end
