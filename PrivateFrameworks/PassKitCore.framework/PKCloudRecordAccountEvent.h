/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKAccountEvent;

@interface PKCloudRecordAccountEvent : PKCloudRecordObject {

	PKAccountEvent* _event;

}

@property (nonatomic,retain) PKAccountEvent * event;              //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEvent:(PKAccountEvent *)arg1 ;
-(PKAccountEvent *)event;
-(id)item;
-(long long)compare:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
