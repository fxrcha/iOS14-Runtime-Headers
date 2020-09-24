/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphDataModelEnrichmentManagerDelegate;
@class NSArray, PGManager;

@interface PGGraphDataModelEnrichmentManager : NSObject {

	NSArray* _enrichmentProcessors;
	long long _enrichmentContext;
	PGManager* _manager;
	id<PGGraphDataModelEnrichmentManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PGManager * manager;                                                      //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic,__weak) id<PGGraphDataModelEnrichmentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * enrichmentProcessors;                                           //@synthesize enrichmentProcessors=_enrichmentProcessors - In the implementation block
@property (nonatomic,readonly) long long enrichmentContext;                                              //@synthesize enrichmentContext=_enrichmentContext - In the implementation block
+(id)enrichmentProcessorsForDataModelEnrichmentContext:(long long)arg1 ;
+(id)lightWeightEnrichmentProcessors;
+(id)weeklyEnrichmentProcessors;
+(id)_allEnrichmentProcessorsWithTailorOptions:(unsigned long long)arg1 ;
+(id)backgroundEnrichmentProcessors;
+(id)liveUpdateEnrichmentProcessors;
-(id)initWithManager:(id)arg1 enrichmentContext:(long long)arg2 ;
-(BOOL)_enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(PGManager *)manager;
-(BOOL)enrichDataModelForHighlightUUIDs:(id)arg1 withError:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<PGGraphDataModelEnrichmentManagerDelegate>)arg1 ;
-(id<PGGraphDataModelEnrichmentManagerDelegate>)delegate;
-(id)initWithManager:(id)arg1 enrichmentProcessors:(id)arg2 ;
-(BOOL)enrichDataModelWithGraphUpdateInventory:(id)arg1 error:(id*)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSArray *)enrichmentProcessors;
-(long long)enrichmentContext;
-(BOOL)enrichDataModelWithError:(id*)arg1 progressBlock:(/*^block*/id)arg2 ;
@end
