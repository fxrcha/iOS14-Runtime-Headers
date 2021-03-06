/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGaussianBlurXY : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSigmaX;
	NSNumber* inputSigmaY;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSigmaX; 
@property (nonatomic,retain) NSNumber * inputSigmaY; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(BOOL)_isIdentity;
-(id)outputImage;
-(NSNumber *)inputSigmaY;
-(void)setInputSigmaY:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaX;
-(void)setInputSigmaX:(NSNumber *)arg1 ;
@end

