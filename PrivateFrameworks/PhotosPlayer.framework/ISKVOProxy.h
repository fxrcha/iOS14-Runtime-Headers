/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISKVOProxyDelegate;
@class NSArray, NSString;

@interface ISKVOProxy : NSObject {

	id _target;
	NSArray* _keyPaths;
	NSString* _identifier;
	id<ISKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ISKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<ISKVOProxyDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<ISKVOProxyDelegate>)delegate;
-(void)stopObservingTarget;
-(void)startObservingTarget;
-(id)initWithTarget:(id)arg1 keyPaths:(id)arg2 identifier:(id)arg3 delegate:(id)arg4 ;
@end
