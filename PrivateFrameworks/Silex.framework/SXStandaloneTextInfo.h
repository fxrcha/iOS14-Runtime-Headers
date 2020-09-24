/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSDContainerInfo.h>

@protocol TSDOwningAttachment, TSDContainerInfo;
@class TSDInfoGeometry, TSPObject, NSObject, SXTextTangierStorage, NSString;

@interface SXStandaloneTextInfo : NSObject <TSDContainerInfo> {

	BOOL floatingAboveText;
	BOOL anchoredToText;
	BOOL inlineWithText;
	BOOL attachedToBodyText;
	TSDInfoGeometry* geometry;
	TSPObject*<TSDOwningAttachment> owningAttachment;
	NSObject*<TSDContainerInfo> parentInfo;
	SXTextTangierStorage* _storage;

}

@property (nonatomic,readonly) SXTextTangierStorage * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
-(id)initWithStorage:(id)arg1 ;
-(SXTextTangierStorage *)storage;
-(void)dealloc;
-(id)copyWithContext:(id)arg1 ;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
-(TSDInfoGeometry *)geometry;
-(Class)repClass;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)childInfos;
-(BOOL)anchoredToText;
-(BOOL)attachedToBodyText;
-(BOOL)floatingAboveText;
-(BOOL)inlineWithText;
@end
