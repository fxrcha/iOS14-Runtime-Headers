/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying> {

	NSString* _itemIdentifier;
	NSString* _storeID;
	NSString* _storeAlbumID;
	BOOL _hideDuration;
	double _currentTime;
	double _duration;
	long long _itemType;
	long long _playState;

}

@property (assign,nonatomic) double currentTime;                   //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hideDuration;                    //@synthesize hideDuration=_hideDuration - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long itemType;                   //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic) long long playState;                  //@synthesize playState=_playState - In the implementation block
@property (nonatomic,copy) NSString * storeID;                     //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * storeAlbumID;                //@synthesize storeAlbumID=_storeAlbumID - In the implementation block
-(void)setCurrentTime:(double)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlayState:(long long)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(NSString *)storeAlbumID;
-(void)setStoreAlbumID:(NSString *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(long long)itemType;
-(id)init;
-(long long)playState;
-(double)currentTime;
-(id)description;
-(NSString *)storeID;
-(void)setHideDuration:(BOOL)arg1 ;
-(BOOL)hideDuration;
@end

