/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SizeContext : NSObject {

	NSMutableArray* _windowContextStack;

}
+(id)sharedInstance;
-(void)pushContextWithWindow:(id)arg1 ;
-(id)init;
-(void)popContextFromWindow:(id)arg1 ;
-(BOOL)hasWindowForCurrentContext;
-(id)windowForCurrentContext;
@end

