/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface MSGetMailIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign,nonatomic) long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSArray * mails; 
-(long long)code;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(void)setCode:(long long)arg1 ;
@end

