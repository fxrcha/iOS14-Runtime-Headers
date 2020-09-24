/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _INVocabularyConnection, NSString;

@interface INPreferences : NSObject {

	_INVocabularyConnection* _assistantdConnection;
	NSString* _cachedSiriLanguageCode;

}

@property (setter=_setCachedSiriLanguageCode:,copy) NSString * _cachedSiriLanguageCode;              //@synthesize cachedSiriLanguageCode=_cachedSiriLanguageCode - In the implementation block
+(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
+(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)siriAuthorizationStatus;
+(id)siriLanguageCode;
+(id)sharedPreferences;
-(NSString *)_cachedSiriLanguageCode;
-(void)assertThisProcessHasSiriEntitlement;
-(void)_updateWithExtensionContext:(id)arg1 ;
-(BOOL)_weAreRunningAsAnExtension;
-(long long)_siriAuthorizationStatus;
-(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
-(void)_verifyProcessCanDonateIntentWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCachedSiriLanguageCode:(id)arg1 ;
-(id)_init;
-(id)init;
-(id)_siriLanguageCode;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
@end
