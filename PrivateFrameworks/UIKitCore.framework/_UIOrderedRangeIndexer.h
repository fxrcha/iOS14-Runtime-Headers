/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIOrderedRangeIndexer : NSObject {

	shared_ptr<_UIOrderedRangeIndexerImpl>* _orderedRangeIndexerImpl;

}

@property (nonatomic,readonly) long long numberOfRanges; 
@property (nonatomic,readonly) NSArray * orderedRanges; 
@property (nonatomic,readonly) NSRange containingRange; 
-(NSRange)rangeContainingLocation:(long long)arg1 ;
-(NSRange)rangeAtIndex:(long long)arg1 ;
-(long long)indexOfRangeContainingLocation:(long long)arg1 ;
-(id)init;
-(long long)numberOfRanges;
-(NSRange)containingRange;
-(NSArray *)orderedRanges;
-(void)appendRange:(NSRange)arg1 ;
-(id)description;
@end
