/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPCloudContainerObserver.h>

@class MSPJournal, NSArray, NSOrderedSet, NSString;

@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver> {

	MSPJournal* _journal;
	NSArray* _containers;
	NSOrderedSet* _migratedFavoriteIdentifiers;

}

@property (nonatomic,retain) MSPJournal * journal;                                    //@synthesize journal=_journal - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                    //@synthesize containers=_containers - In the implementation block
@property (nonatomic,retain) NSOrderedSet * migratedFavoriteIdentifiers;              //@synthesize migratedFavoriteIdentifiers=_migratedFavoriteIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MSPJournal *)journal;
-(void)_performMigrationsForCollectionsContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)setContainers:(NSArray *)arg1 ;
-(void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCloudContainers:(id)arg1 ;
-(void)_performMigrationsForPinnedPlacesContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudContainer:(id)arg1 didFetchChanges:(id)arg2 ;
-(void)setMigratedFavoriteIdentifiers:(NSOrderedSet *)arg1 ;
-(void)performPreSyncMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(void)performMigrationsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)containers;
-(void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContainers:(id)arg1 ;
-(void)_performMigrationsForHistoryContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performMigrationsForFavoritesContainerWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudContainerDidChange:(id)arg1 ;
-(NSOrderedSet *)migratedFavoriteIdentifiers;
-(void)setJournal:(MSPJournal *)arg1 ;
@end
