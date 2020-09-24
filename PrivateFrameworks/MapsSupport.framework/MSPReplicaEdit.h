/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPReplicaEdit : NSObject <NSCopying> {

	NSUUID* _identifierOfAffectedRecord;

}

@property (nonatomic,readonly) NSUUID * identifierOfAffectedRecord;              //@synthesize identifierOfAffectedRecord=_identifierOfAffectedRecord - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(NSUUID *)identifierOfAffectedRecord;
@end
