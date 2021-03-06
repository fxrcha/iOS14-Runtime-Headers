/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {

	SSXPCConnection* _connection;
	SSKeyValueStoreDatabase* _database;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}

@property (getter=isLocalReadable,readonly) BOOL localReadable; 
@property (getter=isLocalWritable,readonly) BOOL localWritable; 
+(BOOL)isLocalReadable;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
-(void)removeAllValuesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeAccountFromDomain:(id)arg1 ;
-(void)removeAllValuesForDomain:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)isLocalReadable;
-(void)removeAccountDictionaries;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAllValuesForDomain:(id)arg1 ;
-(id)init;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyAccounts;
-(void)getValuesForDomain:(id)arg1 keys:(const id*)arg2 count:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)isLocalWritable;
-(id)accountDictionaries;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 ;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)getValueForDomain:(id)arg1 key:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_loadDatabaseIfNecessary;
-(void)setValuesWithDictionary:(id)arg1 forDomain:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

