/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITextFieldVisualStyle.h>
#import <UIKitCore/_UITextFieldEditingProcessorDelegate.h>

@class NSString;

@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultFocusedTextColor;
-(id)defaultTextColor;
-(BOOL)textShouldUseVibrancy;
-(id)placeholderColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)editingProcessorOverridingEditingAttributes:(id)arg1 ;
-(id)parentViewForTextContentView;
-(id)_defaultTextColorForUserInterfaceStyle;
-(id)_defaultTextColorBlackKeyboard;
-(id)_defaultTextColorDarkKeyboard;
-(id)_defaultTextColorLightKeyboard;
-(id)_placeholderTextColorBlackKeyboard;
-(id)_placeholderTextColorDarkKeyboard;
-(id)_placeholderTextColorLightKeyboard;
-(id)_placeholderTextColorFocused;
-(id)_defaultEditingFont;
-(void)handleTextVibrancy;
@end

