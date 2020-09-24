/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PLResourceRecipe : NSObject <NSCopying>
+(id)recipeFromID:(unsigned)arg1 ;
+(Class)classFromRecipeID:(unsigned)arg1 ;
-(unsigned)recipeID;
-(BOOL)isDerivative;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)recipeClassID;
-(id)supportedVersionsForLocalResourceGeneration;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(id)utiInContext:(id)arg1 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 reason:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)codecInContext:(id)arg1 ;
-(BOOL)colorSpaceIsNativeForDisplay;
-(unsigned long long)hash;
-(BOOL)isMarkedFullSize;
-(id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2 ;
-(void)populateAdjustedRecipeIngredients:(id)arg1 asset:(id)arg2 version:(unsigned)arg3 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
@end
