/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXConditionHints.h>

@protocol SXConditionHints <NSObject>
@property (nonatomic,readonly) long long minViewportWidth; 
@property (nonatomic,readonly) long long maxViewportWidth; 
@property (nonatomic,readonly) long long minViewportAspectRatio; 
@property (nonatomic,readonly) long long maxViewportAspectRatio; 
@property (nonatomic,readonly) long long minContentSizeCategory; 
@property (nonatomic,readonly) long long maxContentSizeCategory; 
@property (nonatomic,readonly) long long minColumns; 
@property (nonatomic,readonly) long long maxColumns; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) long long viewLocation; 
@property (nonatomic,readonly) long long minSpecVersion; 
@property (nonatomic,readonly) long long maxSpecVersion; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long subscriptionStatus; 
@property (nonatomic,readonly) long long testing; 
@property (nonatomic,readonly) long long preferredColorScheme; 
@property (nonatomic,readonly) long long newsletter; 
@property (nonatomic,readonly) long long configurationKey; 
@required
-(long long)maxColumns;
-(long long)verticalSizeClass;
-(long long)newsletter;
-(long long)testing;
-(long long)subscriptionStatus;
-(long long)horizontalSizeClass;
-(long long)platform;
-(long long)maxContentSizeCategory;
-(long long)preferredColorScheme;
-(long long)viewLocation;
-(long long)minContentSizeCategory;
-(long long)minViewportWidth;
-(long long)maxViewportWidth;
-(long long)minViewportAspectRatio;
-(long long)maxViewportAspectRatio;
-(long long)minColumns;
-(long long)minSpecVersion;
-(long long)maxSpecVersion;
-(long long)configurationKey;

@end


@class NSString;

@interface SXConditionHints : SXJSONObject <SXConditionHints>

@property (nonatomic,readonly) long long minViewportWidth; 
@property (nonatomic,readonly) long long maxViewportWidth; 
@property (nonatomic,readonly) long long minViewportAspectRatio; 
@property (nonatomic,readonly) long long maxViewportAspectRatio; 
@property (nonatomic,readonly) long long minContentSizeCategory; 
@property (nonatomic,readonly) long long maxContentSizeCategory; 
@property (nonatomic,readonly) long long minColumns; 
@property (nonatomic,readonly) long long maxColumns; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) long long viewLocation; 
@property (nonatomic,readonly) long long minSpecVersion; 
@property (nonatomic,readonly) long long maxSpecVersion; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long subscriptionStatus; 
@property (nonatomic,readonly) long long testing; 
@property (nonatomic,readonly) long long preferredColorScheme; 
@property (nonatomic,readonly) long long newsletter; 
@property (nonatomic,readonly) long long configurationKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(long long)configurationKey;
-(long long)newsletter;
-(long long)preferredColorScheme;
-(long long)testing;
-(long long)subscriptionStatus;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(long long)maxSpecVersion;
-(long long)minSpecVersion;
-(long long)viewLocation;
-(long long)platform;
-(long long)maxColumns;
-(long long)minColumns;
-(long long)maxContentSizeCategory;
-(long long)minContentSizeCategory;
-(long long)maxViewportAspectRatio;
-(long long)minViewportAspectRatio;
-(long long)maxViewportWidth;
-(long long)minViewportWidth;
-(long long)ternaryValueForJSONValue:(id)arg1 type:(int)arg2 ;
-(long long)minViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)minColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)maxColumnsWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)platformWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)viewLocationWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)minSpecVersionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)testingWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)newsletterWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)configurationKeyWithValue:(id)arg1 withType:(int)arg2 ;
@end
