/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject {

	GEOPDQuickLinkItem* _quickLinkItem;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSString * appAdamID; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) long long type; 
-(NSString *)appAdamID;
-(NSString *)URLString;
-(NSString *)title;
-(long long)type;
-(id)initWithQuickLink:(id)arg1 ;
-(NSString *)bundleID;
@end
