/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSMapTable, NSString, NSMutableSet, NSMutableDictionary, NSSet;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSString* _serviceToken;
	NSString* _service;
	NSMutableSet* _cachedAccounts;
	NSMutableSet* _enabledAccounts;
	NSMutableDictionary* _transactionIDToHandlersMap;
	BOOL _accountsLoaded;
	BOOL _isLocalAccountVisible;

}

@property (nonatomic,readonly) NSSet * accounts; 
@property (nonatomic,readonly) NSSet * internalAccounts; 
@property (nonatomic,readonly) NSSet * enabledAccounts; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accountAdded:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)disableAccount:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_connect;
-(void)removeDelegate:(id)arg1 ;
-(void)_loadCachedAccounts;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)_removeAccount:(id)arg1 ;
-(void)_loadCachedAccountsWithDictionaries:(id)arg1 ;
-(void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)dealloc;
-(void)enableAccount:(id)arg1 ;
-(void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)accountsChanged:(id)arg1 forTopic:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)daemonDisconnected;
-(NSSet *)accounts;
-(void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)accountWithLoginID:(id)arg1 service:(id)arg2 ;
-(id)initWithService:(id)arg1 delegateContext:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 ;
-(void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(NSSet *)enabledAccounts;
-(void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateLocalAccountVisibility;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)accountUpdated:(id)arg1 ;
-(NSString *)serviceName;
-(void)accountRemoved:(id)arg1 ;
-(id)accountWithUniqueID:(id)arg1 ;
-(NSSet *)internalAccounts;
-(void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2 ;
@end
