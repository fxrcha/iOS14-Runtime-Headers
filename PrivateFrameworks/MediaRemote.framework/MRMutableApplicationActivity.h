/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRApplicationActivity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (nonatomic,copy) NSString * primaryApplicationDisplayID; 
@property (nonatomic,copy) NSString * secondaryApplicationDisplayID; 
@property (assign,nonatomic) int status; 
+(BOOL)supportsSecureCoding;
-(void)setSecondaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setPrimaryApplicationDisplayID:(NSString *)arg1 ;
@end
