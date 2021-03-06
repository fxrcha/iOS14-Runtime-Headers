/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@class NSExtension, AUHostDelegate, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext {

	NSExtension* _extension;
	AUHostDelegate* _delegate;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) AUHostDelegate * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setDelegate:(AUHostDelegate *)arg1 ;
-(AUHostDelegate *)delegate;
@end

