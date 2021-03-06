/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKFullScreenEffectDelegate;
@class CKAudioController, NSString, CKMessagePartChatItem;

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {

	CKAudioController* _audioController;
	float _currentVolume;
	char messageOrientation;
	BOOL _triggeredByResponseKit;
	NSString* _identifier;
	CKMessagePartChatItem* _triggeringChatItem;
	id<CKFullScreenEffectDelegate> _delegate;

}

@property (assign,nonatomic) BOOL triggeredByResponseKit;                                 //@synthesize triggeredByResponseKit=_triggeredByResponseKit - In the implementation block
@property (assign,nonatomic) char messageOrientation; 
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * triggeringChatItem;                  //@synthesize triggeringChatItem=_triggeringChatItem - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tapBackFilter;
+(id)stickerFilter;
+(id)bigEmojiFilter;
+(id)_monochromeDimmingFilterWithType:(int)arg1 ;
-(NSString *)identifier;
-(Class)effectViewClass;
-(BOOL)_isPlaySoundEnabled;
-(double)duration;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)effectIsDark;
-(id)backgroundColor;
-(unsigned long long)layerCount;
-(void)setDelegate:(id<CKFullScreenEffectDelegate>)arg1 ;
-(CKMessagePartChatItem *)triggeringChatItem;
-(void)setMessageOrientation:(char)arg1 ;
-(void)setTriggeredByResponseKit:(BOOL)arg1 ;
-(void)setTriggeringChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)prepareSoundEffect;
-(void)stopSoundEffect;
-(id<CKFullScreenEffectDelegate>)delegate;
-(void)applyMessageFiltersToCells:(id)arg1 ;
-(void)applyMessageFiltersToTriggeringCell:(id)arg1 ;
-(BOOL)isForegroundEffect;
-(BOOL)shouldDrawOverNavigationBar;
-(void)playSoundEffect;
-(void)clearMessageFiltersFromCells:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3 ;
-(id)messageFilters;
-(void)animateFiltersForCell:(id)arg1 ;
-(int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(BOOL*)arg2 orientation:(char*)arg3 ;
-(BOOL)_supportsSoundEffects;
-(id)soundEffectFileURL;
-(BOOL)soundEffectHasHapticTrack;
-(void)_audioSessionOptionsWillChange:(id)arg1 ;
-(void)_didPrepareSoundEffect;
-(void)_ensureAudioPlayer;
-(char)messageOrientation;
-(BOOL)triggeredByResponseKit;
@end

