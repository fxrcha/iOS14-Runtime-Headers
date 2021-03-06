/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount, NSString;

@interface ISLogoutOperation : ISOperation {

	SSAccount* _account;
	NSString* _logKey;

}

@property (nonatomic,retain) SSAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                //@synthesize logKey=_logKey - In the implementation block
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)run;
-(void)setAccount:(SSAccount *)arg1 ;
-(SSAccount *)account;
-(id)_copyAuthenticationContext;
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1 ;
-(id)_createLogoutRequestProperties;
-(id)initWithAccount:(id)arg1 logKey:(id)arg2 ;
@end

