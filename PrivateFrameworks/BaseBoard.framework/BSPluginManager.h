/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString, NSArray;

@interface BSPluginManager : NSObject {

	NSBundle* _bundle;
	NSString* _pluginDirectory;
	NSArray* _pluginBundles;

}

@property (nonatomic,readonly) NSBundle * bundle;                            //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * pluginDirectory;              //@synthesize pluginDirectory=_pluginDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pluginBundles;                 //@synthesize pluginBundles=_pluginBundles - In the implementation block
+(id)mainManager;
-(NSBundle *)bundle;
-(id)pluginBundleForName:(id)arg1 type:(id)arg2 ;
-(id)pluginBundleForIdentifier:(id)arg1 ;
-(NSArray *)pluginBundles;
-(NSString *)pluginDirectory;
-(id)pluginBundlesForType:(id)arg1 ;
-(id)description;
@end

