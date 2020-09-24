/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary, NSString, TIInputContextHistory;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _triggerSourceType;
	NSSet* _availableApps;
	NSDictionary* _attributedString;
	NSString* _context;
	TIInputContextHistory* _inputContextHistory;
	NSString* _contentType;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;                          //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,retain) NSSet * availableApps;                                      //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributedString;                          //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSString * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) TIInputContextHistory * inputContextHistory;              //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,readonly) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isEquivalentDictionary:(id)arg1 second:(id)arg2 ;
-(NSDictionary *)attributedString;
-(NSString *)contentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TIInputContextHistory *)inputContextHistory;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned char)triggerSourceType;
-(id)initWithSource:(unsigned char)arg1 attributes:(id)arg2 ;
-(void)setAvailableApps:(NSSet *)arg1 ;
-(id)initWithContext:(id)arg1 inputContextHistory:(id)arg2 contentType:(id)arg3 ;
-(NSSet *)availableApps;
-(BOOL)isEqualToProactiveTrigger:(id)arg1 ;
@end
