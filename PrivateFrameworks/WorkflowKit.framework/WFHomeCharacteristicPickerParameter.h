/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HMService, NSString;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HMService* _service;
	NSString* _homeIdentifier;

}

@property (nonatomic,retain) HMService * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * homeIdentifier;                 //@synthesize homeIdentifier=_homeIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;              //@synthesize possibleStates=_possibleStates - In the implementation block
-(BOOL)isHidden;
-(HMService *)service;
-(NSArray *)possibleStates;
-(NSString *)homeIdentifier;
-(void)setHomeIdentifier:(NSString *)arg1 ;
-(void)setService:(HMService *)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setService:(id)arg1 homeIdentifier:(id)arg2 ;
-(void)updatePossibleStates;
@end

