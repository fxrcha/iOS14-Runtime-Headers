/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSURL;

@interface SBIconViewDragInfo : NSObject <NSSecureCoding, BSDescriptionProviding> {

	NSString* _bundleIdentifier;
	NSURL* _launchURL;
	long long _startLocation;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                        //@synthesize launchURL=_launchURL - In the implementation block
@property (assign,nonatomic) long long startLocation;                //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSURL *)launchURL;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStartLocation:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)startLocation;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

