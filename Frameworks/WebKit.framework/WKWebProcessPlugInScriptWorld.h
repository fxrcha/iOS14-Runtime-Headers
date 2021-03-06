/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;

}

@property (readonly) InjectedBundleScriptWorld* _scriptWorld; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)world;
+(id)normalWorld;
-(void)clearWrappers;
-(Object*)_apiObject;
-(void)dealloc;
-(void)makeAllShadowRootsOpen;
-(void)disableOverrideBuiltinsBehavior;
-(InjectedBundleScriptWorld*)_scriptWorld;
-(NSString *)name;
@end

