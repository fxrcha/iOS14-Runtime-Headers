/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSString;

@interface NSSymbolicExpression : NSExpression {

	NSString* _token;

}
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)constantValue;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
