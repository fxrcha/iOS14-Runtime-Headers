/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TextColumn : NSObject {

	NSMutableArray* _mutableRows;

}

@property (nonatomic,retain) NSMutableArray * mutableRows;              //@synthesize mutableRows=_mutableRows - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rows; 
@property (readonly) unsigned long long rowCount; 
-(NSArray *)rows;
-(id)init;
-(void)addRow:(id)arg1 ;
-(unsigned long long)rowCount;
-(id)initWithRows:(id)arg1 ;
-(void)setMutableRows:(NSMutableArray *)arg1 ;
-(void)sortRowsInAscendingOrder;
-(NSMutableArray *)mutableRows;
@end

