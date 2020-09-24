/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBRootFolderPageTransition.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderPageTransitionHandle : NSObject <SBRootFolderPageTransition, BSDescriptionProviding> {

	BOOL _valid;
	NSString* _reason;
	SBRootFolderController* _folderController;
	long long _sourcePageState;
	long long _destinationPageState;
	double _pageTransitionProgress;

}

@property (nonatomic,copy,readonly) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) SBRootFolderController * folderController;              //@synthesize folderController=_folderController - In the implementation block
@property (assign,nonatomic) long long sourcePageState;                                //@synthesize sourcePageState=_sourcePageState - In the implementation block
@property (assign,nonatomic) long long destinationPageState;                           //@synthesize destinationPageState=_destinationPageState - In the implementation block
@property (assign,nonatomic) double pageTransitionProgress;                            //@synthesize pageTransitionProgress=_pageTransitionProgress - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)destinationPageState;
-(double)pageTransitionProgress;
-(void)setValid:(BOOL)arg1 ;
-(SBRootFolderController *)folderController;
-(void)endTransitionSuccessfully:(BOOL)arg1 ;
-(void)setDestinationPageState:(long long)arg1 ;
-(void)setTransitionProgress:(double)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithFolderController:(id)arg1 destinationPageState:(long long)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(BOOL)isValid;
-(void)setPageTransitionProgress:(double)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setSourcePageState:(long long)arg1 ;
-(long long)sourcePageState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end
