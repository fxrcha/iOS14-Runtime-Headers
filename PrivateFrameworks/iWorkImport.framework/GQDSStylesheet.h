/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDRoot;

@interface GQDSStylesheet : NSObject {

	GQDRoot* mRoot;
	GQDSStylesheet* mParent;
	CFDictionaryRef mIdentifiedStyles;
	CFArrayRef mStylesNeedingParentResolutionInParent;
	CFArrayRef mStylesNeedingParentResolution;

}
-(id)initWithRoot:(id)arg1 ;
-(void)dealloc;
-(id)parent;
-(void)addStyle:(id)arg1 withOwnedIdentifier:(char*)arg2 ;
-(BOOL)addStyle:(id)arg1 withOwnedXmlUid:(char*)arg2 ;
-(id)styleWithIdentifier:(const char*)arg1 ;
-(id)styleWithXmlUid:(const char*)arg1 ;
-(void)addStyle:(id)arg1 needingParentResolution:(const char*)arg2 resolveInParent:(BOOL)arg3 ;
-(void)resolveStyleParents;
-(CFArrayRef)retainedArrayOfIdentifiedStyles;
@end

