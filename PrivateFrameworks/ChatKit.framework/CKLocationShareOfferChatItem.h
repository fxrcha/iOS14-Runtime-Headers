/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {

	FMFLocation* _lastKnownLocation;

}

@property (nonatomic,retain) FMFLocation * lastKnownLocation;               //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (nonatomic,readonly) long long offerState; 
@property (nonatomic,__weak,readonly) IMHandle * sender; 
@property (nonatomic,__weak,readonly) NSString * titleText; 
@property (nonatomic,__weak,readonly) NSString * locationText; 
+(id)placeholderPreviewCache;
+(id)titleBarMaskImageForWidth:(double)arg1 ;
-(id)time;
-(IMHandle *)sender;
-(long long)offerState;
-(NSString *)locationText;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)_handleLocationDidChangeNotification:(id)arg1 ;
-(FMFLocation *)lastKnownLocation;
-(void)setLastKnownLocation:(FMFLocation *)arg1 ;
-(id)_previewCacheKey:(unsigned long long)arg1 ;
-(id)previewURLForWidth:(unsigned long long)arg1 ;
-(id)savedPreviewFromURL:(id)arg1 ;
-(id)_desaturatedImageForImage:(id)arg1 ;
-(Class)balloonViewClass;
-(id)_placeholderCacheKey;
-(void)_generateMapPreview;
-(void)savePreview:(id)arg1 toURL:(id)arg2 ;
-(BOOL)shouldUpdatePreviewWithLocation:(id)arg1 lastKnownLocation:(id)arg2 previewURL:(id)arg3 ;
-(id)transcriptTraitCollection;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 withCoordinate:(CLLocationCoordinate2D)arg3 forState:(long long)arg4 ;
-(id)modificationDateForPreview:(id)arg1 ;
-(void)configureBalloonView:(id)arg1 ;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)_generatePlaceholderThumbnailFillToSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)previewURL;
-(NSString *)titleText;
-(BOOL)failed;
-(BOOL)isFromMe;
@end
