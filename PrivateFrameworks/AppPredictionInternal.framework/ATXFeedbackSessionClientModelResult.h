/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ATXClientModelCacheUpdate, ATXFeedbackSession, ATXPredictionContext;

@interface ATXFeedbackSessionClientModelResult : NSObject {

	NSArray* _engagedSuggestions;
	NSArray* _rejectedSuggestions;
	NSArray* _shownSuggestions;
	ATXClientModelCacheUpdate* _cacheUpdate;
	ATXFeedbackSession* _feedbackSession;
	ATXPredictionContext* _context;

}

@property (nonatomic,retain) NSArray * engagedSuggestions;                         //@synthesize engagedSuggestions=_engagedSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * rejectedSuggestions;                        //@synthesize rejectedSuggestions=_rejectedSuggestions - In the implementation block
@property (nonatomic,retain) NSArray * shownSuggestions;                           //@synthesize shownSuggestions=_shownSuggestions - In the implementation block
@property (nonatomic,retain) ATXClientModelCacheUpdate * cacheUpdate;              //@synthesize cacheUpdate=_cacheUpdate - In the implementation block
@property (nonatomic,retain) ATXFeedbackSession * feedbackSession;                 //@synthesize feedbackSession=_feedbackSession - In the implementation block
@property (nonatomic,retain) ATXPredictionContext * context;                       //@synthesize context=_context - In the implementation block
-(unsigned char)consumerSubType;
-(id)clientModelId;
-(void)setShownSuggestions:(NSArray *)arg1 ;
-(BOOL)isEqualToATXFeedbackSessionClientModelResult:(id)arg1 ;
-(ATXFeedbackSession *)feedbackSession;
-(ATXClientModelCacheUpdate *)cacheUpdate;
-(NSArray *)shownSuggestions;
-(id)initWithEngagedSuggestions:(id)arg1 rejectedSuggestions:(id)arg2 shownSuggestions:(id)arg3 cacheUpdate:(id)arg4 feedbackSession:(id)arg5 context:(id)arg6 ;
-(void)setContext:(ATXPredictionContext *)arg1 ;
-(void)setCacheUpdate:(ATXClientModelCacheUpdate *)arg1 ;
-(id)init;
-(NSArray *)rejectedSuggestions;
-(BOOL)isEqual:(id)arg1 ;
-(ATXPredictionContext *)context;
-(NSArray *)engagedSuggestions;
-(unsigned long long)hash;
-(void)setEngagedSuggestions:(NSArray *)arg1 ;
-(void)setFeedbackSession:(ATXFeedbackSession *)arg1 ;
-(void)setRejectedSuggestions:(NSArray *)arg1 ;
@end

