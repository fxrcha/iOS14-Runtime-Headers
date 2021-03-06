/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject {

	NSMutableArray* _emailAddresses;
	NSMutableArray* _phoneNumbers;
	NSMutableArray* _unknown;

}

@property (nonatomic,retain) NSMutableArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSMutableArray * unknown;                     //@synthesize unknown=_unknown - In the implementation block
-(id)build;
-(void)setPhoneNumbers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)emailAddresses;
-(void)setEmailAddresses:(NSMutableArray *)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(NSMutableArray *)unknown;
-(void)addUnknown:(id)arg1 ;
-(id)init;
-(void)addPhoneNumber:(id)arg1 ;
-(NSMutableArray *)phoneNumbers;
-(void)setUnknown:(NSMutableArray *)arg1 ;
@end

