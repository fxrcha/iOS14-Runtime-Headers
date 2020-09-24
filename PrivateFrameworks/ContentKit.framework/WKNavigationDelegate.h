/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKNavigationDelegate <NSObject>
@optional
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(/*^block*/id)arg4;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)webViewWebContentProcessDidTerminate:(id)arg1;
-(void)webView:(id)arg1 authenticationChallenge:(id)arg2 shouldAllowDeprecatedTLS:(/*^block*/id)arg3;

@end
