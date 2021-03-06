/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemCollection.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPCacheableConcreteMediaEntity.h>

@class MPMediaQuery, MPMediaItem, MPConcreteMediaEntityPropertiesCache;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCopying, MPCacheableConcreteMediaEntity> {

	long long _identifier;
	MPMediaQuery* _itemsQuery;
	long long _grouping;
	MPMediaItem* _representativeItem;
	MPConcreteMediaEntityPropertiesCache* _propertiesCache;

}

@property (nonatomic,retain,readonly) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues; 
+(id)createUncachedMediaItemCollectionWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 ;
+(BOOL)supportsSecureCoding;
-(id)items;
-(id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(long long)groupingType;
-(void)_enumerateItemPersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)itemsQuery;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(id)mediaLibrary;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)representativeItem;
-(MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
-(void)invalidateCachedProperties;
-(id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3 ;
-(id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)persistentID;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

