/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * mainEntitySemanticData; 
@property (nonatomic,copy) NSURL * viewId; 
+(id)list;
+(id)listWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)appId;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)mainEntitySemanticData;
-(void)setMainEntitySemanticData:(NSString *)arg1 ;
-(NSURL *)viewId;
-(void)setViewId:(NSURL *)arg1 ;
@end
