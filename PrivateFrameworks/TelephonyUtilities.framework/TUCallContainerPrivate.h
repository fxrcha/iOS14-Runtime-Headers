/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, TUCall;


@protocol TUCallContainerPrivate <TUCallContainer>
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
@required
-(BOOL)existingCallsHaveMultipleProviders;
-(TUCall *)conferenceCall;
-(TUCall *)frontmostCall;
-(NSArray *)_allCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2;
-(TUCall *)displayedCall;
-(TUCall *)frontmostAudioOrVideoCall;

@end
