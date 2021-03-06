/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _LTTranslationParagraph : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _text;
	NSArray* _spans;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * spans;                    //@synthesize spans=_spans - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(NSArray *)spans;
-(NSString *)text;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 spans:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

