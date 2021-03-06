/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerStackView.h>

@class SPUICompletionStringModel, UIColor, SearchUIImageView, SPUIMaskedLabelsStackView, SFSearchResult, SFCardSection, SPUICompletion, UIFont, NSString;

@interface SPUICompletionStringView : NUIContainerStackView {

	BOOL _focusIsOnFirstResult;
	SPUICompletionStringModel* _searchFieldModel;
	UIColor* _selectionHighlightColor;
	SearchUIImageView* _imageView;
	SPUIMaskedLabelsStackView* _labelsStackView;
	SFSearchResult* _result;
	SFCardSection* _cardSection;
	SPUICompletion* _completion;

}

@property (retain) SearchUIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (retain) SPUIMaskedLabelsStackView * labelsStackView;                         //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (retain) SFSearchResult * result;                                             //@synthesize result=_result - In the implementation block
@property (retain) SFCardSection * cardSection;                                         //@synthesize cardSection=_cardSection - In the implementation block
@property (assign) BOOL focusIsOnFirstResult;                                           //@synthesize focusIsOnFirstResult=_focusIsOnFirstResult - In the implementation block
@property (retain) SPUICompletion * completion;                                         //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) SPUICompletionStringModel * searchFieldModel;              //@synthesize searchFieldModel=_searchFieldModel - In the implementation block
@property (nonatomic,retain) UIFont * fontForCompletionLabel; 
@property (nonatomic,retain) UIColor * textColorForCompletionLabel; 
@property (nonatomic,retain) UIColor * selectionHighlightColor;                         //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (readonly) NSString * completionText; 
@property (readonly) double trailingPaddingForFieldEditor; 
@property (readonly) BOOL hasContent; 
@property (readonly) BOOL hasPrefix; 
@property (readonly) NSString * copyableString; 
@property (readonly) BOOL completionResultIsPotentiallyPunchout; 
-(UIColor *)selectionHighlightColor;
-(void)updateFields;
-(void)setImageView:(SearchUIImageView *)arg1 ;
-(SPUIMaskedLabelsStackView *)labelsStackView;
-(void)setSearchFieldModel:(SPUICompletionStringModel *)arg1 ;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(void)setLabelsStackView:(SPUIMaskedLabelsStackView *)arg1 ;
-(BOOL)focusIsOnFirstResult;
-(SFSearchResult *)result;
-(id)completionLabel;
-(void)setTextColorForCompletionLabel:(UIColor *)arg1 ;
-(SFCardSection *)cardSection;
-(BOOL)hasContent;
-(void)setCompletion:(SPUICompletion *)arg1 ;
-(void)setFocusIsOnFirstResult:(BOOL)arg1 ;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(NSString *)completionText;
-(SPUICompletion *)completion;
-(id)init;
-(SPUICompletionStringModel *)searchFieldModel;
-(id)bridgeLabel;
-(BOOL)completionResultIsPotentiallyPunchout;
-(void)setResult:(SFSearchResult *)arg1 ;
-(BOOL)hasPrefix;
-(UIFont *)fontForCompletionLabel;
-(void)updateLayoutMargins;
-(double)trailingPaddingForFieldEditor;
-(void)setFontForCompletionLabel:(UIFont *)arg1 ;
-(id)extensionLabel;
-(SearchUIImageView *)imageView;
-(void)updateWithResult:(id)arg1 cardSection:(id)arg2 focusIsOnFirstResult:(BOOL)arg3 ;
-(NSString *)copyableString;
-(UIColor *)textColorForCompletionLabel;
@end

