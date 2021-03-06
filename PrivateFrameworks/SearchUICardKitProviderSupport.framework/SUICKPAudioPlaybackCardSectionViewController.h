/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUICardKitProviderSupport/SUICKPInteractiveCardSectionViewController.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>
#import <libobjc.A.dylib/CRKEventResponding.h>

@class SFAudioPlaybackCardSection, NSString;

@interface SUICKPAudioPlaybackCardSectionViewController : SUICKPInteractiveCardSectionViewController <SFFeedbackListener, CRKEventResponding>

@property (nonatomic,retain) SFAudioPlaybackCardSection * cardSection; 
@property (nonatomic,retain) UIView*<SearchUICardSectionViewUpdatable> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardSectionClasses;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)_performCommands:(id)arg1 applyingUserInfo:(id)arg2 ;
@end

