/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray;

@interface OSLogPreferencesManager : NSObject {

	NSString* _name;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;

}

@property (nonatomic,readonly) NSArray * processes; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
+(id)sharedManager;
-(void)reset;
-(NSArray *)processes;
-(long long)enabledLevel;
-(long long)persistedLevel;
-(id)_levelPrefs;
-(void)setEnabledLevel:(long long)arg1 ;
-(void)setPersistedLevel:(long long)arg1 ;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;
-(id)init;
-(NSArray *)subsystems;
-(void)resetAll;
@end

