/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKAutocompleteAnalyticsState.h>
#import <libobjc.A.dylib/MKAutocompleteAnalyticsProvider.h>

@protocol MKAutocompleteAnalyticsProvider
@required
-(id)captureNewMetrics;

@end


@protocol OS_dispatch_queue;
@class NSObject, MKAutocompleteAnalyticsState;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKAutocompleteAnalyticsState* _currentState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (nonatomic,retain) MKAutocompleteAnalyticsState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(MKAutocompleteAnalyticsState *)currentState;
-(void)setCurrentState:(MKAutocompleteAnalyticsState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)captureNewMetrics;
-(id)init;
-(void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3 ;
@end

