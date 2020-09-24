/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AMSEngagementAppWhitelistModel : NSObject {

	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) BOOL allowsResponse; 
+(BOOL)matchEvent:(id)arg1 toFilter:(id)arg2 ;
-(id)initWithCacheObject:(id)arg1 ;
-(id)exportObject;
-(BOOL)matchesEvent:(id)arg1 ;
-(id)initWithFilter:(id)arg1 allowsResponse:(BOOL)arg2 ;
-(BOOL)allowsResponse;
-(NSDictionary *)definition;
@end
