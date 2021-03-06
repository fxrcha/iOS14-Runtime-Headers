/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigFCRCALayer : FigBaseCALayer {

	OpaqueFigCaptionRendererCALayerInternal* layerInternal;

}
-(void)setVideoBounds:(CGRect)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)compose;
-(void)dealloc;
-(void)layoutSublayers;
-(id)init;
-(void)clear:(CGRect)arg1 ;
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
@end

