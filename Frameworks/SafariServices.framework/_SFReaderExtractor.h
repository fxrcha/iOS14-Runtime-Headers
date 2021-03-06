/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/_SFReaderControllerDelegate.h>

@class WKWebView, WKProcessPool, NSURL, _SFReaderController, NSTimer, NSString;

@interface _SFReaderExtractor : NSObject <WKNavigationDelegate, _SFReaderControllerDelegate> {

	WKWebView* _webView;
	WKWebView* _readerWebView;
	WKProcessPool* _processPool;
	NSURL* _currentURL;
	_SFReaderController* _readerController;
	NSTimer* _loadingTimeoutTimer;
	NSTimer* _readerExtractionTimer;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_configuration;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(id)init;
-(void)_invalidateTimers;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)_setUpReaderController;
-(void)_finishWithContent:(id)arg1 error:(id)arg2 ;
-(void)_scheduleLoadingTimeout;
-(void)_scheduleReaderDataExtractionTimeout;
-(void)getExtractedDataForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getExtractedDataForURL:(id)arg1 withData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_processPool;
-(void)readerController:(id)arg1 didCollectArticleContent:(id)arg2 ;
@end

