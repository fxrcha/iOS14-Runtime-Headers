/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString, MTLDebugHeap;

@interface MTLDebugResource : NSObject <NSObject> {

	id _baseObject;
	id _parent;
	MTLDebugHeap* _heap;
	BOOL _hasTrackedMakeAliasable;

}

@property (readonly) id baseObject;                                 //@synthesize baseObject=_baseObject - In the implementation block
@property (readonly) id<MTLHeap> heap; 
@property (assign) BOOL hasTrackedMakeAliasable;                    //@synthesize hasTrackedMakeAliasable=_hasTrackedMakeAliasable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLHeap>)heap;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)baseObject;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3 ;
-(BOOL)hasTrackedMakeAliasable;
-(void)setHasTrackedMakeAliasable:(BOOL)arg1 ;
@end
