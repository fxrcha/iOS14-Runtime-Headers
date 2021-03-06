/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlanProfile, CTCellularPlanSubscription, NSNumber, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isHomePlan;
	BOOL _requiresUserConsent;
	NSString* _phoneNumber;
	CTCellularPlanProfile* _profile;
	CTCellularPlanSubscription* _subscription;
	NSNumber* _subscriptionStatusOverride;

}

@property (nonatomic,retain) CTCellularPlanProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CTCellularPlanSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionStatusOverride;                  //@synthesize subscriptionStatusOverride=_subscriptionStatusOverride - In the implementation block
@property (assign,nonatomic) BOOL isHomePlan;                                        //@synthesize isHomePlan=_isHomePlan - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;                               //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,readonly) NSData * profileId; 
@property (nonatomic,readonly) BOOL isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) BOOL autoRenew; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double billingStartDate; 
@property (nonatomic,readonly) double billingEndDate; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) int planType; 
@property (nonatomic,readonly) NSString * planDescription; 
@property (nonatomic,readonly) int planStatus; 
@property (nonatomic,readonly) int accountStatus; 
@property (nonatomic,readonly) NSString * accountURL; 
@property (nonatomic,readonly) BOOL isDisableNotAllowed; 
@property (nonatomic,readonly) BOOL isDeleteNotAllowed; 
@property (nonatomic,readonly) NSArray * dataUsage; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) BOOL isSelectable; 
+(BOOL)supportsSecureCoding;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(NSString *)iccid;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
-(int)planType;
-(CTCellularPlanSubscription *)subscription;
-(int)planStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)statusAsString:(id)arg1 ;
-(CTCellularPlanProfile *)profile;
-(NSArray *)dataUsage;
-(double)timestamp;
-(int)status;
-(BOOL)isSelectable;
-(id)init;
-(BOOL)isSelected;
-(int)accountStatus;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)carrierName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)profileId;
-(NSString *)accountURL;
-(BOOL)isDeleteNotAllowed;
-(NSString *)planDescription;
-(double)billingStartDate;
-(double)billingEndDate;
-(NSNumber *)subscriptionStatusOverride;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(BOOL)isDisableNotAllowed;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(BOOL)autoRenew;
-(void)setSubscriptionStatusOverride:(NSNumber *)arg1 ;
-(long long)planDescriptionCompare:(id)arg1 ;
-(BOOL)isHomePlan;
-(void)setIsHomePlan:(BOOL)arg1 ;
@end

