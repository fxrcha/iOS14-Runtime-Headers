/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>

@class CRKRemoteEndpoint, DMFControlGroupIdentifier;

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {

	unsigned short _port;
	unsigned _leaderIP;

}

@property (nonatomic,copy,readonly) CRKRemoteEndpoint * crk_endpoint; 
@property (nonatomic,readonly) unsigned leaderIP;                                        //@synthesize leaderIP=_leaderIP - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(CRKRemoteEndpoint *)crk_endpoint;
-(unsigned short)port;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(unsigned)leaderIP;
-(id)stringValue;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 port:(unsigned short)arg4 ;
-(BOOL)isEqualToControlSessionIdentifier:(id)arg1 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

