/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSString* _desc;
	unsigned long long _hash;
	int _serverPid;
	int _clientPid;
	unsigned long long _count;

}

@property (nonatomic,readonly) int serverPid;                         //@synthesize serverPid=_serverPid - In the implementation block
@property (nonatomic,readonly) int clientPid;                         //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithClientPid:(int)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(int)serverPid;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)hash;
-(int)clientPid;
-(NSString *)description;
@end
