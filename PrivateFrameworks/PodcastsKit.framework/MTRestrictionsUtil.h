/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTRestrictionsUtil : NSObject
+(BOOL)isExplicitContentAllowed;
+(void)reloadSettings;
+(void)didDisplayExplicitRestrictionAlertOfType:(int)arg1 ;
+(id)settingsURL;
+(BOOL)_fetchIsExplicitContentAllowed;
+(id)settingsURLString;
+(BOOL)_isActiveAccountAllowedToUpdateRestrictions;
+(id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)arg1 ;
+(int)explicitRestrictionAlertTypeForTypeString:(id)arg1 ;
+(BOOL)_isRestrictedByAdministrator;
+(BOOL)_mustResolveInScreenTimePreferences;
+(void)_setAllowExplicitContent;
@end

