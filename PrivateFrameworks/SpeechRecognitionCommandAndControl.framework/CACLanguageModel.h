/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSArray;

@interface CACLanguageModel : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _text;
	NSMutableDictionary* _attributes;
	NSMutableArray* _children;

}

@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSArray * children;                            //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)attributes;
-(NSString *)text;
-(id)_mutableChildren;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)_mutableAttributes;
-(id)description;
-(void)removeAllChildren;
-(id)initWithText:(id)arg1 identifier:(id)arg2 attributes:(id)arg3 ;
-(void)addChildLanguageModel:(id)arg1 ;
-(id)objectForAttribute:(id)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRef;
-(void)setObject:(id)arg1 forAttribute:(id)arg2 ;
-(id)_initWithLanguageModel:(id)arg1 ;
-(void)logTreeDescriptionWithLevel:(int)arg1 ;
@end

