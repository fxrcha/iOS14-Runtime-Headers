/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding> {

	Class _modelClass;

}

@property (nonatomic,readonly) Class modelClass;                         //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,readonly) MPModelKind * identityKind; 
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithModelClass:(Class)arg1 ;
+(id)kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)_kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(/*^block*/id)arg3 ;
-(Class)modelClass;
-(id)debugDescription;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(NSString *)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MPModelKind *)identityKind;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(unsigned long long)hash;
-(id)_initWithModelClass:(Class)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
@end

