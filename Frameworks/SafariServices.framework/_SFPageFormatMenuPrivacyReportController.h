/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/_SFPageFormatMenuItemController.h>

@protocol _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;
@class _SFSettingsAlertItem, MCProfileConnection, UIViewController, NSString;

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {

	MCProfileConnection* _profileConnection;
	UIViewController* _enableTrackerProtectionViewController;
	id<_SFPageFormatMenuItemControllerDelegate> _delegate;
	id<_SFBrowserDocument> _document;

}

@property (nonatomic,readonly) id<_SFBrowserDocument> document;                                        //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _SFSettingsAlertItem * alertItem; 
@property (assign,nonatomic,__weak) id<_SFPageFormatMenuItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)_presentPrivacyReport;
-(void)_presentPromptToEnableTrackerProtection;
-(void)_enableTrackerProtection;
-(void)_initializeManagedProfileConnection;
-(_SFSettingsAlertItem *)alertItem;
-(void)_dismissPromptIfTrackerProtectionEnabled;
-(id)initWithDocument:(id)arg1 ;
-(void)setDelegate:(id<_SFPageFormatMenuItemControllerDelegate>)arg1 ;
-(id<_SFPageFormatMenuItemControllerDelegate>)delegate;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<_SFBrowserDocument>)document;
@end

