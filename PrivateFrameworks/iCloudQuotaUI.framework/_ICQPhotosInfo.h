/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ICQPhotosInfo : NSObject {

	unsigned long long _photoCount;
	unsigned long long _videoCount;

}

@property (assign,nonatomic) unsigned long long photoCount;              //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
+(id)mockCount:(id)arg1 ;
+(void)getInfoWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)videoCount;
-(void)setPhotoCount:(unsigned long long)arg1 ;
-(unsigned long long)photoCount;
-(void)setVideoCount:(unsigned long long)arg1 ;
@end

