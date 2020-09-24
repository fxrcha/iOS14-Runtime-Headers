/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface gan_model_pre_A11Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _output;

}

@property (nonatomic,retain) MLMultiArray * output;               //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)output;
-(void)setOutput:(MLMultiArray *)arg1 ;
-(id)initWithOutput:(id)arg1 ;
@end
