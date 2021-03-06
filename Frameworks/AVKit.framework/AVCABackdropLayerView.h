/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSHashTable, CABackdropLayer;

@interface AVCABackdropLayerView : UIView {

	BOOL _forceLowQualityEffect;
	UIColor* _customBackgroundColor;
	AVCABackdropLayerView* _groupLeader;
	NSHashTable* _dependents;
	long long _activeBackdropEffect;

}

@property (assign,nonatomic,__weak) AVCABackdropLayerView * groupLeader;              //@synthesize groupLeader=_groupLeader - In the implementation block
@property (nonatomic,readonly) NSHashTable * dependents;                              //@synthesize dependents=_dependents - In the implementation block
@property (assign,nonatomic) long long activeBackdropEffect;                          //@synthesize activeBackdropEffect=_activeBackdropEffect - In the implementation block
@property (nonatomic,readonly) CABackdropLayer * layer; 
@property (assign,getter=isCaptureOnly,nonatomic) BOOL captureOnly; 
@property (assign,nonatomic) BOOL forceLowQualityEffect;                              //@synthesize forceLowQualityEffect=_forceLowQualityEffect - In the implementation block
@property (nonatomic,copy) UIColor * customBackgroundColor;                           //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
+(Class)layerClass;
+(id)blurFilter;
+(id)averageFilter;
+(id)reducedTransparencyColor;
+(id)colorMatrixFilter;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_ensureDependents;
-(long long)activeBackdropEffect;
-(void)setForceLowQualityEffect:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeDependent:(id)arg1 ;
-(void)updateGroupLeader;
-(BOOL)isCaptureOnly;
-(void)setActiveBackdropEffect:(long long)arg1 ;
-(NSHashTable *)dependents;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(void)setCaptureOnly:(BOOL)arg1 ;
-(void)_enumerateDependents:(/*^block*/id)arg1 ;
-(void)updateActiveBackdropEffectIfGroupLeader;
-(void)didMoveToWindow;
-(void)setGroupLeader:(AVCABackdropLayerView *)arg1 ;
-(AVCABackdropLayerView *)groupLeader;
-(UIColor *)customBackgroundColor;
-(BOOL)forceLowQualityEffect;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addDependent:(id)arg1 ;
-(void)_updateFilters;
@end

