/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXActionBlendingUpdater : NSObject
+(double)generateScoreForFallbackActionKey:(id)arg1 fallbackAction:(id)arg2 penalizedFallbackActions:(id)arg3 ;
+(void)updateBlendingLayerWithFallbackActions;
+(void)updateBlendingLayerWithBehavioralPredictions:(id)arg1 feedbackMetadata:(id)arg2 consumerSubType:(unsigned char)arg3 ;
+(id)clientModelIdForConsumerSubType:(unsigned char)arg1 ;
+(void)updateBlendingLayerWithHeuristicPredictions:(id)arg1 ;
+(void)updateBlendingLayerWithRecentShortcuts:(id)arg1 ;
@end

