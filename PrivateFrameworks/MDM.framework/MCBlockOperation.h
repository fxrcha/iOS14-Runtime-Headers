/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@interface MCBlockOperation : CATOperation {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)main;
@end
