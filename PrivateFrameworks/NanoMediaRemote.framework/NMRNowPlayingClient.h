/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NMRNowPlayingClient : NSObject {

	void* _mediaRemoteNowPlayingClient;
	NSString* _bundleIdentifier;
	NSString* _displayName;

}

@property (nonatomic,readonly) void* mediaRemoteNowPlayingClient;              //@synthesize mediaRemoteNowPlayingClient=_mediaRemoteNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(NSString *)bundleIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void*)mediaRemoteNowPlayingClient;
-(id)initWithMRNowPlayingClient:(void*)arg1 ;
@end

