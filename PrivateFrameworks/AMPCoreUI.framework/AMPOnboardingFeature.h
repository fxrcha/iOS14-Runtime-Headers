/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface AMPOnboardingFeature : NSObject {

	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(NSString *)descriptionText;
-(NSString *)titleText;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 ;
@end
