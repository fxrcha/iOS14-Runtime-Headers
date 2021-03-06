/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBPearlMatchingStateProvider.h>

@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;
@class NSString;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider> {

	BOOL _seenMatchResultSinceScreenOn;
	id<SBPearlMatchingStateProviderDelegate> _delegate;
	id<SBUIBiometricResource> _biometricResource;

}

@property (assign,nonatomic) BOOL seenMatchResultSinceScreenOn;                                     //@synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIBiometricResource> biometricResource;                    //@synthesize biometricResource=_biometricResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBPearlMatchingStateProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL pearlMatchEnabledAndPossible; 
-(BOOL)pearlMatchEnabledAndPossible;
-(void)reset;
-(void)setDelegate:(id<SBPearlMatchingStateProviderDelegate>)arg1 ;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(id<SBPearlMatchingStateProviderDelegate>)delegate;
-(id<SBUIBiometricResource>)biometricResource;
-(void)setSeenMatchResultSinceScreenOn:(BOOL)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(BOOL)seenMatchResultSinceScreenOn;
-(id)initWithBiometricResource:(id)arg1 ;
@end

