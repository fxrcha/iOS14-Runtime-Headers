/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ATXGenericFileBasedCache : NSObject {

	NSString* _cacheFilePath;

}
-(id)initWithCacheFilePath:(id)arg1 ;
-(id)init;
-(void)readWithMaxValidAge:(double)arg1 unlink:(BOOL)arg2 cacheDataOut:(id*)arg3 cacheAgeOut:(double*)arg4 ;
-(BOOL)storeData:(id)arg1 ;
@end
