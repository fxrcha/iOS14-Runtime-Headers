/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface DCNotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                           //@synthesize phase=_phase - In the implementation block
-(void)setPhase:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)phase;
-(UIImage *)image;
@end
