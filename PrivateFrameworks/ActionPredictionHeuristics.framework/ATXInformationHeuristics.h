/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristics.framework/ActionPredictionHeuristics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXInformationHeuristicRefreshTriggerDelegate.h>

@protocol OS_dispatch_queue, ATXInformationHeuristicsDelegate;
@class NSMutableSet, NSObject, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate> {

	NSMutableSet* _heuristicRefreshTriggers;
	NSMutableSet* _heuristicsPendingRefresh;
	NSObject*<OS_dispatch_queue> _queue;
	_PASSimpleCoalescingTimer* _coalescedRefreshOperation;
	id<ATXInformationHeuristicsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXInformationHeuristicsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)refreshResultsForAllHeuristicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_criteriaForRefreshJobOnDate:(id)arg1 ;
-(id)sourceIdentifierForHeuristicWithName:(id)arg1 ;
-(void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDelegate:(id<ATXInformationHeuristicsDelegate>)arg1 ;
-(void)_refreshResultsForAllHeuristics:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<ATXInformationHeuristicsDelegate>)delegate;
-(id)getResultsFromHeuristicInterpreter:(id)arg1 ;
-(void)informationHeuristicRefreshTrigger:(id)arg1 didTriggerRefreshForHeuristics:(id)arg2 ;
-(void)_setRefreshCTSJobForCriteria:(id)arg1 forHeuristics:(id)arg2 ;
-(BOOL)_refreshResultsForHeuristics:(id)arg1 ;
@end
