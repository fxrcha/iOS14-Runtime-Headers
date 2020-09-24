/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <IconServices/ISIcon.h>

@protocol CUIKIconGenerator;
@class NSDateComponents, NSCalendar, ISIcon;

@interface CUIKIcon : ISIcon {

	NSDateComponents* _dateComponents;
	NSCalendar* _calendar;
	long long _format;
	id<CUIKIconGenerator> _iconGenerator;
	ISIcon* _isIcon;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) long long format;                                    //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) id<CUIKIconGenerator> iconGenerator;                 //@synthesize iconGenerator=_iconGenerator - In the implementation block
@property (nonatomic,retain) ISIcon * isIcon;                                       //@synthesize isIcon=_isIcon - In the implementation block
-(NSDateComponents *)dateComponents;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(long long)format;
-(NSCalendar *)calendar;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(id<CUIKIconGenerator>)iconGenerator;
-(ISIcon *)isIcon;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 ;
-(void)setIsIcon:(ISIcon *)arg1 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageForImageDescriptor:(id)arg1 ;
@end
