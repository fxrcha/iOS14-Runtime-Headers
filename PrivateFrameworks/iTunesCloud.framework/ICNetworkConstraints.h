/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {

	BOOL _dataAllowedFallbackValue;
	BOOL _cellularDataAllowedFallbackValue;
	BOOL _wiFiDataAllowedFallbackValue;
	NSMutableDictionary* _networkTypeToDataAllowed;
	NSMutableDictionary* _networkTypeToSizeLimit;

}
+(id)constraintsForSystemApplicationType:(long long)arg1 ;
+(id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(BOOL)shouldAllowDataForNetworkType:(long long)arg1 ;
-(BOOL)shouldAllowDataForCellularNetworkTypes;
-(BOOL)shouldAllowDataForWiFiNetworkTypes;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)sizeLimitForNetworkType:(long long)arg1 ;
@end
