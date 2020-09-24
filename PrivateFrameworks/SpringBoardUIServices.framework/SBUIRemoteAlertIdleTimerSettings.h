/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding> {

	BOOL _disablesWarn;
	BOOL _usesLockScreenRules;
	double _autoLockTimeout;

}

@property (assign,nonatomic) double autoLockTimeout;                //@synthesize autoLockTimeout=_autoLockTimeout - In the implementation block
@property (assign,nonatomic) BOOL disablesWarn;                     //@synthesize disablesWarn=_disablesWarn - In the implementation block
@property (assign,nonatomic) BOOL usesLockScreenRules;              //@synthesize usesLockScreenRules=_usesLockScreenRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAutoLockTimeout:(double)arg1 ;
-(BOOL)disablesWarn;
-(void)setDisablesWarn:(BOOL)arg1 ;
-(BOOL)usesLockScreenRules;
-(void)setUsesLockScreenRules:(BOOL)arg1 ;
-(double)autoLockTimeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
