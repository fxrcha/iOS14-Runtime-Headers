/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SFWebViewUsageMonitor : NSObject {

	NSString* _hostAppIdentifier;
	BOOL _userInteracted;
	BOOL _urlHasQueryString;
	BOOL _urlHasIDFA;
	BOOL _viewControllerViewIsHidden;

}

@property (assign,nonatomic) BOOL userInteracted;                          //@synthesize userInteracted=_userInteracted - In the implementation block
@property (assign,nonatomic) BOOL urlHasQueryString;                       //@synthesize urlHasQueryString=_urlHasQueryString - In the implementation block
@property (assign,nonatomic) BOOL urlHasIDFA;                              //@synthesize urlHasIDFA=_urlHasIDFA - In the implementation block
@property (assign,nonatomic) BOOL viewControllerViewIsHidden;              //@synthesize viewControllerViewIsHidden=_viewControllerViewIsHidden - In the implementation block
@property (nonatomic,readonly) BOOL shouldAudit; 
@property (nonatomic,readonly) NSString * stringAsAuditKey; 
-(void)auditUsageIfNeeded;
-(id)initWithHostAppIdentifier:(id)arg1 ;
-(BOOL)userInteracted;
-(void)setUserInteracted:(BOOL)arg1 ;
-(BOOL)urlHasQueryString;
-(BOOL)urlHasIDFA;
-(BOOL)viewControllerViewIsHidden;
-(BOOL)shouldAudit;
-(NSString *)stringAsAuditKey;
-(void)setUrlHasIDFA:(BOOL)arg1 ;
-(void)setUrlHasQueryString:(BOOL)arg1 ;
-(void)checkURL:(id)arg1 ;
-(void)setViewControllerViewIsHidden:(BOOL)arg1 ;
@end

