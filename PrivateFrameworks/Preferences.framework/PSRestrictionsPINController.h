/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
+(BOOL)settingEnabled;
-(BOOL)simplePIN;
-(id)title;
-(int)pinLength;
-(BOOL)isNumericPIN;
-(CFStringRef)defaultsID;
-(id)init;
-(id)stringsBundle;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setPIN:(id)arg1 ;
@end

