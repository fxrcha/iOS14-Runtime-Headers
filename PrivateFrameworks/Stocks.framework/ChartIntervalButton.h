/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UILabel.h>

@interface ChartIntervalButton : UILabel {

	BOOL _selected;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)titleForInterval:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
@end

