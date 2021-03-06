/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject {

	unsigned long long _downloadToken;
	NSString* _localFilePath;
	NSArray* _sinfs;
	NSURL* _sourceURL;

}

@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSString * localFilePath;                        //@synthesize localFilePath=_localFilePath - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                                 //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(NSString *)localFilePath;
-(void)setLocalFilePath:(NSString *)arg1 ;
-(unsigned long long)downloadToken;
-(NSURL *)sourceURL;
@end

