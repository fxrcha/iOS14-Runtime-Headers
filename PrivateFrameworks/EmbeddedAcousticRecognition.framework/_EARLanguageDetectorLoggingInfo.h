/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, _EARLanguageDetectorRequestContext;

@interface _EARLanguageDetectorLoggingInfo : NSObject {

	NSDictionary* _loggingDict;
	_EARLanguageDetectorRequestContext* _context;

}

@property (nonatomic,copy) NSDictionary * loggingDict;                                //@synthesize loggingDict=_loggingDict - In the implementation block
@property (nonatomic,copy) _EARLanguageDetectorRequestContext * context;              //@synthesize context=_context - In the implementation block
-(void)setContext:(_EARLanguageDetectorRequestContext *)arg1 ;
-(_EARLanguageDetectorRequestContext *)context;
-(NSDictionary *)loggingDict;
-(void)setLoggingDict:(NSDictionary *)arg1 ;
@end
