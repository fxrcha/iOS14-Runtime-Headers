/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSManagedObjectContext, NSPersistentStore;


@protocol STPersistenceControllerProtocol <NSObject>
@property (nonatomic,readonly) NSManagedObjectContext * viewContext; 
@property (nonatomic,readonly) BOOL hasStoreLoaded; 
@property (readonly) NSPersistentStore * localStore; 
@property (readonly) NSPersistentStore * cloudStore; 
@required
-(NSPersistentStore *)localStore;
-(void)performBackgroundTask:(/*^block*/id)arg1;
-(NSManagedObjectContext *)viewContext;
-(id)newBackgroundContext;
-(NSPersistentStore *)cloudStore;
-(void)performBackgroundTaskAndWait:(/*^block*/id)arg1;
-(id)localPersistentStoreMetadataValueForKey:(id)arg1;
-(void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2;
-(BOOL)hasStoreLoaded;

@end
