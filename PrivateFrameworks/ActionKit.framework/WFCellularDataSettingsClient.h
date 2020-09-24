/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class NSString;

@interface WFCellularDataSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	CTServerConnectionRef _connection;

}

@property (nonatomic,readonly) CTServerConnectionRef connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(CTServerConnectionRef)connection;
-(void)dealloc;
-(id)initWithServerConnection:(CTServerConnectionRef)arg1 ;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
