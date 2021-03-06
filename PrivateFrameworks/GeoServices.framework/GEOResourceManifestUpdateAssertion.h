/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface GEOResourceManifestUpdateAssertion : NSObject {

	NSString* _reason;
	double _creationTimestamp;
	NSObject*<OS_xpc_object> _connection;
	int _notifyToken;

}
-(id)initWithReason:(id)arg1 ;
-(void)_connectToGeod;
-(id)debugDescription;
-(void)dealloc;
-(id)init;
@end

