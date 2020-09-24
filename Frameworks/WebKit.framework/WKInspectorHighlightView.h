/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {

	NSMutableArray* _layers;

}
-(void)update:(const Highlight*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_createLayers:(unsigned long long)arg1 ;
-(void)_layoutForNodeHighlight:(const Highlight*)arg1 offset:(unsigned)arg2 ;
-(void)_layoutForNodeListHighlight:(const Highlight*)arg1 ;
-(void)_layoutForRectsHighlight:(const Highlight*)arg1 ;
-(void)_removeAllLayers;
@end
