/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonApp.h>

@class NSExtension, LSPlugInKitProxy;

@interface _IMBalloonExtensionApp : IMBalloonApp {

	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(NSExtension *)extension;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)applicationType;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(id)version;
-(id)itemID;
-(LSPlugInKitProxy *)proxy;
-(BOOL)isLaunchProhibited;
-(BOOL)showInBrowser;
-(BOOL)isEnabled;
-(BOOL)isBetaPlugin;
-(BOOL)showableInBrowser;
-(id)plugin;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)isStickerPackOnly;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
@end

