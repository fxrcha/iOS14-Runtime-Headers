/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForPhotosIntentExport.h>

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>

@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) CLPlacemark * locationCreated; 
@property (nonatomic,copy,readonly) NSString * albumName; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long includedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributes; 
@property (nonatomic,copy,readonly) NSArray * peopleInPhoto; 
@property (nonatomic,readonly) long long peopleInPhotoOperator; 
@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,readonly) long long eventsOperator; 
@property (nonatomic,copy) NSArray * places; 
@property (nonatomic,readonly) long long placesOperator; 
@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,readonly) long long activitiesOperator; 
@property (nonatomic,copy) NSArray * geographicalFeatures; 
@property (nonatomic,readonly) long long geographicalFeaturesOperator; 
@property (nonatomic,copy) NSString * memoryName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(id)verb;
-(id)_dictionaryRepresentation;
-(NSArray *)events;
-(id)initWithDateCreated:(id)arg1 locationCreated:(id)arg2 albumName:(id)arg3 searchTerms:(id)arg4 includedAttributes:(unsigned long long)arg5 excludedAttributes:(unsigned long long)arg6 peopleInPhoto:(id)arg7 ;
-(void)setPlaces:(NSArray *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)activities;
-(NSArray *)places;
-(void)setEvents:(NSArray *)arg1 ;
-(id)_metadata;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(CLPlacemark *)arg1 ;
-(long long)eventsOperator;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(NSArray *)peopleInPhoto;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1 ;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1 ;
-(void)setPeopleInPhoto:(NSArray *)arg1 ;
-(long long)searchTermsOperator;
-(long long)peopleInPhotoOperator;
-(void)setVerb:(id)arg1 ;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(NSArray *)arg1 ;
-(void)setMemoryName:(NSString *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
-(INDateComponentsRange *)dateCreated;
-(NSString *)memoryName;
@end

