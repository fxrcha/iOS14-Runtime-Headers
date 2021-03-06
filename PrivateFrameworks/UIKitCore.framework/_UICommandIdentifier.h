/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding> {

	SEL _action;
	id _propertyList;

}

@property (nonatomic,readonly) SEL action;                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id propertyList;              //@synthesize propertyList=_propertyList - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)action;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)propertyList;
-(unsigned long long)hash;
-(id)initWithAction:(SEL)arg1 propertyList:(id)arg2 ;
-(id)description;
@end

