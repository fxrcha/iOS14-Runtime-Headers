/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSArray;

@interface ISIconSpecification : NSObject {

	double _maxScale;
	double _minScale;
	NSArray* _imageSpecifications;
	CGSize _maxSize;
	CGSize _minSize;

}

@property (readonly) NSArray * imageSpecifications;                 //@synthesize imageSpecifications=_imageSpecifications - In the implementation block
@property (readonly) CGSize maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) CGSize minSize;                                //@synthesize minSize=_minSize - In the implementation block
@property (readonly) double maxScale;                               //@synthesize maxScale=_maxScale - In the implementation block
@property (readonly) double minScale;                               //@synthesize minScale=_minScale - In the implementation block
@property (readonly) NSArray * allImageSpecifications; 
+(id)macosIconSpecification;
+(id)macosTemplateIconSpecification;
+(id)defaultIconSpecification;
-(CGSize)maxSize;
-(double)maxScale;
-(double)minScale;
-(CGSize)minSize;
-(NSArray *)imageSpecifications;
-(id)_initWithImageSpecifiactions:(id)arg1 ;
-(id)imageSpecificationForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSArray *)allImageSpecifications;
@end

