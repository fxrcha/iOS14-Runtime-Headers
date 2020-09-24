/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXRenderingConfigurationProvider.h>

@protocol FCNewsAppConfigurationManager;
@class SXRenderingConfiguration, NSString;

@interface NUANFRenderingConfigurationProvider : NSObject <SXRenderingConfigurationProvider> {

	SXRenderingConfiguration* _configuration;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (nonatomic,readonly) SXRenderingConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)initWithAppConfigurationManager:(id)arg1 ;
-(SXRenderingConfiguration *)configuration;
@end
