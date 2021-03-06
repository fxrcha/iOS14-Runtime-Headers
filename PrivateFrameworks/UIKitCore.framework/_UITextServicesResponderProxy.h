/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>

@protocol _UITextServicesResponderProxyDelegate;
@class UIResponder;

@interface _UITextServicesResponderProxy : UIResponder {

	UIResponder* _responder;
	id<_UITextServicesResponderProxyDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) UIResponder * responder;                                       //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextServicesResponderProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_proxyWithResponder:(id)arg1 ;
-(UIResponder *)responder;
-(void)_lookup:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(id)nextResponder;
-(void)_share:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setDelegate:(id<_UITextServicesResponderProxyDelegate>)arg1 ;
-(id<_UITextServicesResponderProxyDelegate>)delegate;
@end

