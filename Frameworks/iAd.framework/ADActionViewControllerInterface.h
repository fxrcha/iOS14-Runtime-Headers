/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ADAdSpace;


@protocol ADActionViewControllerInterface <NSObject>
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (nonatomic,__weak,readonly) ADAdSpace * adSpace; 
@required
-(ADAdSpace *)adSpace;
-(void)dismiss;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;

@end
