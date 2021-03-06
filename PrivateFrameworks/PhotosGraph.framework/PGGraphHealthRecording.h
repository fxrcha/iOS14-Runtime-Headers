/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGGraphHealthRecording <NSObject>
@required
-(void)recordGraphRebuildTimeout;
-(void)recordGraphRebuildsCancellation;
-(void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2;
-(void)recordGraphRebuildFailure;
-(void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2;
-(void)recordHighlightEnrichmentsCancellation;

@end

