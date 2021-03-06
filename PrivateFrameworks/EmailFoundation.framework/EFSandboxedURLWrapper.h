/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, EFDeallocInvocationToken, NSString;

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding> {

	NSURL* _url;
	EFDeallocInvocationToken* _invocable;
	NSString* _sandboxToken;

}

@property (nonatomic,readonly) EFDeallocInvocationToken * invocable;              //@synthesize invocable=_invocable - In the implementation block
@property (nonatomic,readonly) NSString * sandboxToken;                           //@synthesize sandboxToken=_sandboxToken - In the implementation block
@property (readonly) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(NSString *)ef_publicDescription;
-(NSString *)debugDescription;
-(void)addInvalidationHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EFDeallocInvocationToken *)invocable;
-(id)initWithFileURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)sandboxToken;
-(NSString *)description;
@end

