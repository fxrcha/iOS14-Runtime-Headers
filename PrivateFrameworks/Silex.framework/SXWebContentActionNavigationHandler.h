/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWNavigationHandler.h>

@protocol SXActionProvider, SXActionManager;
@class NSString;

@interface SXWebContentActionNavigationHandler : NSObject <SWNavigationHandler> {

	id<SXActionProvider> _actionProvider;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;              //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionManager>)actionManager;
-(unsigned long long)handleRequest:(id)arg1 ;
-(id<SXActionProvider>)actionProvider;
-(id)initWithActionProvider:(id)arg1 actionManager:(id)arg2 ;
@end
