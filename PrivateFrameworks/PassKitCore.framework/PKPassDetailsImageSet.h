/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassDetailsImageSet : PKPassImageSet {

	PKImage* _cardHolderPicture;

}

@property (nonatomic,retain) PKImage * cardHolderPicture;              //@synthesize cardHolderPicture=_cardHolderPicture - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)imageSetType;
+(BOOL)shouldCache;
-(void)preheatImages;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)setCardHolderPicture:(PKImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKImage *)cardHolderPicture;
-(unsigned long long)hash;
@end

