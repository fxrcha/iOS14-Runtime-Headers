/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMMobileAssetEvaluationNode.h>

@class iconclassification__generated__;

@interface AXMIconClassDetectorNode : AXMMobileAssetEvaluationNode

@property (nonatomic,readonly) iconclassification__generated__ * mlModel; 
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(unsigned long long)maxSupportedFormatVersion;
-(id)_localizedClassForClass:(id)arg1 ;
@end
