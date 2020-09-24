/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ControlCenterUI/ControlCenterUI-Structs.h>
@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject {

	NSArray* _packingRules;
	NSDictionary* _rectByIdentifier;
	CCUILayoutSize _layoutSize;

}

@property (nonatomic,readonly) CCUILayoutSize layoutSize;                     //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize maximumLayoutSize; 
-(CCUILayoutRect)layoutRectForIdentifier:(id)arg1 ;
-(CCUILayoutSize)maximumLayoutSize;
-(void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 ;
-(CCUILayoutSize)layoutSize;
-(id)initWithPackingRules:(id)arg1 ;
-(id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(CCUILayoutPoint)arg4 maximumSize:(CCUILayoutSize)arg5 outputLayoutSize:(out CCUILayoutSize*)arg6 ;
@end
