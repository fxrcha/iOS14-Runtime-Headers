/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreNFC/NFCReaderSession.h>

@class NFTimer, NSArray;

@interface NFCVASReaderSession : NFCReaderSession {

	NFTimer* _presenceCheckTimer;
	NSArray* _vasConfig;

}
+(BOOL)readingAvailable;
-(void)dealloc;
-(void)beginSession;
-(void)didTerminate:(id)arg1 ;
-(void)didDetectTags:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)_callbackDidInvalidateWithError:(id)arg1 ;
-(void)_callbackDidBecomeActive;
-(BOOL)_selectOSE;
-(id)_getVASDataWithConfig:(id)arg1 lastInSequence:(BOOL)arg2 ;
-(id)initWithVASCommandConfigurations:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
@end

