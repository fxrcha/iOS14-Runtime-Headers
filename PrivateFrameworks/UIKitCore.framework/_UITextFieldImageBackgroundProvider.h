/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {

	_UITextFieldImageBackgroundView* _backgroundView;

}
-(void)layoutIfNeeded;
-(void)setNeedsDisplay;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(id)backgroundView;
-(void)_applyCorrectImage;
-(void)addToTextField:(id)arg1 ;
@end

