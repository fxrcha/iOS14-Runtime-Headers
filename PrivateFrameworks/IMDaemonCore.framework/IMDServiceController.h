/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)serviceWithName:(id)arg1 ;
-(NSArray *)allServices;
-(void)registerSessionClassWithBundle:(id)arg1 ;
@end

