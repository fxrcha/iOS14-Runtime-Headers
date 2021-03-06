/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@class NSURLSessionConfiguration, NSURLSession, NSString;

@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {

	NSURLSessionConfiguration* _groupConfiguration_ivar;
	NSURLSession* _groupSession_ivar;

}

@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURLSession *)_groupSession;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)dataTaskWithRequest:(id)arg1 ;
@end

