/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MFEmailSetEmail : NSObject {

	unsigned long long _hash;
	NSString* _encodedAddress;
	NSString* _comment;

}

@property (nonatomic,readonly) unsigned long long hash; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) NSString * commentedAddress; 
-(id)initWithAddress:(id)arg1 ;
-(void)dealloc;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)commentedAddress;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToEmail:(id)arg1 ;
@end

