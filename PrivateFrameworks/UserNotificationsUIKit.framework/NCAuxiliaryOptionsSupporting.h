/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NCAuxiliaryOptionsSupporting <NSObject>
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@required
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(id)arg1;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1;

@end

