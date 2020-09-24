/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUIBugReporting <NSObject>
@property (assign,nonatomic,__weak) id<AFUIBugReportingDelegate> delegate; 
@optional
-(void)setComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3;
-(void)setEmailGroup:(id)arg1;

@required
-(void)setHostname:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<AFUIBugReportingDelegate>)delegate;
-(unsigned long long)maximumAttachmentSize;
-(void)setTitle:(id)arg1;
-(void)attachFileAtPath:(id)arg1 image:(BOOL)arg2;
-(BOOL)canReportBugs;
-(void)composeBugReport;
-(void)setSiriLanguage:(id)arg1;
-(void)setLastUserText:(id)arg1;
-(void)setIncludeSysdiagnosesFromDevices:(id)arg1;
-(void)setContextCollectorsInfo:(id)arg1;
-(void)setKeywordIdentifiers:(id)arg1;
-(void)attachData:(id)arg1 name:(id)arg2 mimeType:(id)arg3;

@end
