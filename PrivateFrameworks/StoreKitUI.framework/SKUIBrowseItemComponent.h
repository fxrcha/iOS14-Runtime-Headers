/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

@interface SKUIBrowseItemComponent : SKUIPageComponent {

	NSString* _title;
	NSString* _subtitle;
	long long _index;
	SKUIImageViewElement* _decorationImage;
	BOOL _showTopBorder;

}

@property (nonatomic,readonly) SKUIImageViewElement * decorationImage;              //@synthesize decorationImage=_decorationImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) long long index;                                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                    //@synthesize showTopBorder=_showTopBorder - In the implementation block
-(void)setIndex:(long long)arg1 ;
-(NSString *)subtitle;
-(long long)index;
-(NSString *)title;
-(BOOL)showTopBorder;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(long long)componentType;
-(id)initWithViewElement:(id)arg1 ;
-(SKUIImageViewElement *)decorationImage;
@end

