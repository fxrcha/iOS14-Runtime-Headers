/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol SXDraggable
@property (nonatomic,readonly) id<NSItemProviderWriting> dragObject; 
@property (nonatomic,readonly) NSString * dragIdentifier; 
@property (nonatomic,readonly) UIView * dragPreviewView; 
@required
-(id<NSItemProviderWriting>)dragObject;
-(void)didStartDragging;
-(void)didEndDragging;
-(id)stringForAXDragAction;
-(NSString *)dragIdentifier;
-(UIView *)dragPreviewView;

@end
