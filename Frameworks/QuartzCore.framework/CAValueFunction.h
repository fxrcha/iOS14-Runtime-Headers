/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)functionWithName:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)dealloc;
-(id)_initWithName:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)inputCount;
-(unsigned long long)outputCount;
-(NSString *)name;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end
