/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage

@property (assign,nonatomic) unsigned id_p; 
@property (assign,nonatomic) BOOL hasId_p; 
@property (nonatomic,retain) TRIFactorLevels * defaultFactorLevels; 
@property (assign,nonatomic) BOOL hasDefaultFactorLevels; 
@property (nonatomic,retain) TRIFactorLevels * control; 
@property (assign,nonatomic) BOOL hasControl; 
+(id)descriptor;
@end

