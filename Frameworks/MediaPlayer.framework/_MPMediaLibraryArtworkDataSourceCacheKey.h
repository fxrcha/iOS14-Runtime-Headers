/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {

	id _catalogIdentifier;
	CGSize _representationSize;

}

@property (nonatomic,copy) id catalogIdentifier;                     //@synthesize catalogIdentifier=_catalogIdentifier - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
-(id)initWithArtworkCatalog:(id)arg1 representativeSize:(CGSize)arg2 ;
-(id)catalogIdentifier;
-(void)setCatalogIdentifier:(id)arg1 ;
-(CGSize)representationSize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setRepresentationSize:(CGSize)arg1 ;
@end
