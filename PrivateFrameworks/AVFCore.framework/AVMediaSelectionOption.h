/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSNumber, NSString, NSArray, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (nonatomic,readonly) BOOL mpIsOnlyAC3; 
@property (nonatomic,readonly) BOOL mpIsSDH; 
@property (getter=isAC3Only,readonly) BOOL AC3Only; 
@property (getter=isMain,readonly) BOOL main; 
@property (getter=isSDH,readonly) BOOL SDH; 
@property (getter=isCC,readonly) BOOL CC; 
@property (getter=isEasyReader,readonly) BOOL easyReader; 
@property (getter=isAuxiliary,readonly) BOOL auxiliary; 
@property (readonly) NSNumber * avkit_persistentIdentifier; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSString * shortLocalizedDisplayName; 
@property (nonatomic,readonly) NSString * mediaRemoteIdentifier; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * unicodeLanguageIdentifier; 
@property (nonatomic,readonly) NSString * unicodeLanguageCode; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
+(id)avkit_offOption;
+(id)avkit_autoOption;
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4 ;
+(BOOL)_plistHasOptionIdentifier:(id)arg1 ;
+(id)mediaSelectionNilOptionForGroup:(id)arg1 ;
-(BOOL)mpIsOnlyAC3;
-(BOOL)mpIsSDH;
-(id)makeNowPlayingInfoLanguageOption;
-(id)_languageOptionIdentifier;
-(BOOL)isCC;
-(BOOL)isMain;
-(BOOL)isAuxiliary;
-(id)avkit_title;
-(BOOL)isSDH;
-(NSString *)shortLocalizedDisplayName;
-(BOOL)isAC3Only;
-(NSNumber *)avkit_persistentIdentifier;
-(BOOL)isEasyReader;
-(long long)languageCompare:(id)arg1 currentLanguageCode:(id)arg2 currentLanguageIdentifier:(id)arg3 ;
-(NSString *)localizedDisplayName;
-(NSString *)mediaRemoteIdentifier;
-(id)languageCode;
-(NSString *)mediaType;
-(NSString *)extendedLanguageTag;
-(int)trackID;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 excludeM3U8Metadata:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)optionID;
-(id)track;
-(BOOL)isPlayable;
-(id)initWithGroup:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(id)_ancillaryDescription;
-(BOOL)displaysNonForcedSubtitles;
-(NSArray *)mediaSubTypes;
-(id)_track;
-(void)dealloc;
-(id)fallbackIDs;
-(NSLocale *)locale;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(id)associatedPersistentIDs;
-(id)_taggedMediaCharacteristics;
-(id)associatedExtendedLanguageTag;
-(BOOL)_isMainProgramContent;
-(id)_languageDisplayNameFromMetadataAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 ;
-(id)_displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2 ;
-(id)displayNameWithLocale:(id)arg1 ;
-(id)associatedUnicodeLanguageIdentifier;
-(id)_groupID;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)init;
-(id)group;
-(id)_title;
-(NSString *)unicodeLanguageIdentifier;
-(NSString *)unicodeLanguageCode;
-(NSArray *)commonMetadata;
-(id)propertyList;
-(NSArray *)availableMetadataFormats;
-(BOOL)_representsNilSelection;
-(id)dictionary;
-(id)metadataForFormat:(id)arg1 ;
-(id)description;
-(id)mediaCharacteristics;
@end

