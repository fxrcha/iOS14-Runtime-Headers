/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class CKComponent;

@interface CKInsetComponent : CKComponent {

	UIEdgeInsets _insets;
	CKComponent* _component;

}
+(id)newWithInsets:(UIEdgeInsets)arg1 component:(id)arg2 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 insets:(UIEdgeInsets)arg2 component:(id)arg3 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
@end
