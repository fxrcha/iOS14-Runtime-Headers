/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject {

	NSMutableDictionary* _cachesByStyle;

}
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(/*^block*/id)arg4 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(/*^block*/id)arg3 ;
-(id)_cacheForStyle:(id)arg1 ;
@end
