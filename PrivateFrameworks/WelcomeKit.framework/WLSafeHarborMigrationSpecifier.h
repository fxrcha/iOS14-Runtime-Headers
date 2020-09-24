/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLSafeHarborMigrationSpecifier : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _contentType;
	NSString* _dataType;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dataType;
-(NSString *)contentType;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 contentType:(id)arg2 dataType:(id)arg3 ;
@end
