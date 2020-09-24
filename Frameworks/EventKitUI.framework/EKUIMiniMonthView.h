/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIYearMonthView.h>

@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,retain) NSDateComponents * dateComponents; 
+(double)heightForInterfaceOrientation:(long long)arg1 windowSize:(CGSize)arg2 heightSizeClass:(long long)arg3 ;
-(NSDateComponents *)dateComponents;
-(double)xInset;
-(double)yInset;
-(BOOL)opaque;
-(id)initWithCalendar:(id)arg1 dateComponents:(id)arg2 ;
-(double)_gridOfDaysYAdjustment;
-(double)_gridOfDaysHeightAdjustment;
-(BOOL)vibrant;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)xSpacing;
-(double)ySpacing;
-(id)dayColor;
-(BOOL)showMonthName;
-(BOOL)showWeekDayInitials;
-(double)weekDayInitialsAdjustLeft;
-(double)weekDayInitialsAdjustTop;
-(double)daysXAdjustLeft;
-(double)daysYAdjustTop;
-(id)todayNumberFont;
-(id)dayNumberFont;
-(double)circleSizeForDoubleDigit;
-(double)circleSize;
-(double)circleFrameYAdjustment;
-(double)circleFrameXAdjustment;
-(double)todayTextYAdjustment;
-(double)todayNumberKerning;
-(double)headerXAdjust;
-(double)headerFontMaxSize;
-(id)dayColorKey;
-(double)headerFontMinSize;
-(double)headerFontKerning;
-(id)weekDayInitialsFont;
-(CGRect)frameForGridOfDays:(BOOL)arg1 ;
-(double)dayTextSize;
-(double)todayTextSize;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
-(id)headerFont;
@end
