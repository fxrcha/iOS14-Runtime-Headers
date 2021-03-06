/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSMutableDictionary, NSString, NSDictionary, NSSet;

@interface OSASystemConfiguration : OSAProxyConfiguration {

	BOOL _appleInternal;
	BOOL _carrierInstall;
	BOOL _multiUserMode;
	NSMutableDictionary* _submissionMetadata;
	NSString* _pairedWatchOS;
	NSDictionary* _logConfig;
	NSSet* _logBlacklist;
	NSDictionary* _submissionParams;
	NSDictionary* _whitelistedDomains;
	NSString* _pathRoot;
	NSString* _pathContainerRoot;
	NSString* _pathSubmission;
	NSString* _pathPreferences;
	NSString* _pathDiagnostics;
	NSString* _pathCATasking;
	NSString* _pathAWDTasking;

}

@property (readonly) BOOL optInApple; 
@property (readonly) BOOL optIn3rdParty; 
@property (readonly) BOOL appleInternal; 
@property (readonly) BOOL carrierInstall; 
@property (readonly) BOOL multiUserMode; 
@property (readonly) NSMutableDictionary * submissionMetadata; 
@property (copy) NSString * pathRoot; 
@property (readonly) NSString * pathContainerRoot; 
@property (readonly) NSString * pathSubmission; 
@property (readonly) NSString * pathPreferences; 
@property (readonly) NSString * pathDiagnostics; 
@property (readonly) NSString * pathCATasking; 
@property (readonly) NSString * pathAWDTasking; 
+(id)sharedInstance;
+(void)ensureConformanceOfFile:(int)arg1 ;
+(id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3 ;
-(id)productVersion;
-(BOOL)isWhitelisted:(id)arg1 forDomain:(id)arg2 ;
-(id)identifier;
-(id)serialNumber;
-(id)crashReporterKey;
-(id)experimentGroup;
-(id)pairedWatchOS;
-(NSMutableDictionary *)submissionMetadata;
-(NSString *)pathCATasking;
-(NSString *)pathContainerRoot;
-(void)sysVersionData;
-(id)getLogBlacklist;
-(id)targetAudience;
-(id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4 ;
-(id)productName;
-(id)modelCode;
-(BOOL)isConfigEnabled:(id)arg1 ;
-(id)awdReporterKey;
-(id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3 ;
-(NSString *)pathPreferences;
-(id)productReleaseString;
-(id)releaseType;
-(id)getTaskingKey:(id)arg1 ;
-(NSString *)pathDiagnostics;
-(id)seedGroup;
-(id)automatedDeviceGroup;
-(id)currentTaskingIDByRouting;
-(id)uiCountryCode;
-(id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3 ;
-(id)internalKey;
-(void)saveToPath:(id)arg1 ;
-(NSString *)pathRoot;
-(BOOL)optInApple;
-(id)pathSubmissionForOwner:(id)arg1 ;
-(id)systemId;
-(id)assembleMetadataAt:(double)arg1 withOptions:(unsigned)arg2 ;
-(BOOL)carrierInstall;
-(NSString *)pathSubmission;
-(BOOL)multiUserMode;
-(BOOL)appleInternal;
-(id)logPrefix:(id)arg1 ;
-(id)getPropsForLogType:(id)arg1 ;
-(id)productBuildString;
-(BOOL)usesLegacySubmission:(id)arg1 ;
-(id)automatedContextURL;
-(id)logPath;
-(void)setPathRoot:(NSString *)arg1 ;
-(BOOL)optIn3rdParty;
-(NSString *)pathAWDTasking;
-(void)plumbEmail:(id)arg1 ;
-(BOOL)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(BOOL)arg4 ;
-(id)productNameVersionBuildString;
-(id)buildVersion;
-(id)logExt:(id)arg1 ;
-(id)osTrain;
-(BOOL)isProxy;
-(id)submissionParam:(id)arg1 ;
-(void)onceConfig;
@end

