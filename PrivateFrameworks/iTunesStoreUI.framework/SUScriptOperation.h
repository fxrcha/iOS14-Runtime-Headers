/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOperation, WebScriptObject;

@interface SUScriptOperation : ISOperation {

	id _options;
	ISOperation* _wrappedOperation;
	WebScriptObject* _callbackFunction;

}
+(Class)postOperationClassForType:(id)arg1 ;
+(void)registerPostOperationClass:(Class)arg1 forType:(id)arg2 ;
-(void)run;
-(void)dealloc;
-(id)initWithPostType:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 options:(id)arg2 ;
-(id)initWithOperation:(id)arg1 callback:(id)arg2 ;
-(void)setScriptOptions:(id)arg1 ;
-(void)_sendCompletionCallback;
-(id)_scriptOptions;
@end

