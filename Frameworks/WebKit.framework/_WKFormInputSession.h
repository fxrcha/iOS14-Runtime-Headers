/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView, NSArray;


@protocol _WKFormInputSession <NSObject>
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,retain) UIView * customInputAccessoryView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@property (nonatomic,readonly) BOOL requiresStrongPasswordAssistance; 
@required
-(void)setSuggestions:(id)arg1;
-(NSArray *)suggestions;
-(UIView *)customInputView;
-(NSObject*<NSSecureCoding>)userObject;
-(void)reloadFocusedElementContextView;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(id)arg1;
-(void)setCustomInputView:(id)arg1;
-(UIView *)customInputAccessoryView;
-(void)setCustomInputAccessoryView:(id)arg1;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1;
-(BOOL)forceSecureTextEntry;
-(void)setForceSecureTextEntry:(BOOL)arg1;
-(BOOL)requiresStrongPasswordAssistance;
-(BOOL)isValid;

@end

