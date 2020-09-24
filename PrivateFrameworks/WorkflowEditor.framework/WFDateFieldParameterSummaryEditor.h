/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WFTextInputParameterSummaryEditor.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@class WFTextEditingHintView, NSDateFormatter, NSString;

@interface WFDateFieldParameterSummaryEditor : WFTextInputParameterSummaryEditor <WFParameterEventObserver> {

	WFTextEditingHintView* _hintView;
	NSDateFormatter* _hintDateFormatter;

}

@property (assign,nonatomic,__weak) WFTextEditingHintView * hintView;              //@synthesize hintView=_hintView - In the implementation block
@property (nonatomic,retain) NSDateFormatter * hintDateFormatter;                  //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parameterAttributesDidChange:(id)arg1 ;
-(NSDateFormatter *)hintDateFormatter;
-(void)textEntryDidFinish;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)updateHintView;
-(id)hintTextForVariableString:(id)arg1 ;
-(WFTextEditingHintView *)hintView;
-(void)setHintView:(WFTextEditingHintView *)arg1 ;
-(void)setHintDateFormatter:(NSDateFormatter *)arg1 ;
@end
