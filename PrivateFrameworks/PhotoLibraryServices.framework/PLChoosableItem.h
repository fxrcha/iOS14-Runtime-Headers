/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLChoosableItem : NSObject {

	int _type;
	long long _width;
	long long _height;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) long long width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) long long height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
+(id)choosableItemsFromCloudResources:(id)arg1 ;
-(long long)width;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4 ;
-(BOOL)isEqualToChoosableItem:(id)arg1 ;
-(long long)compareUsingWidth:(id)arg1 ;
-(long long)height;
-(id)initWithCloudResource:(id)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

