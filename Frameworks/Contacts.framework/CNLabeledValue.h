/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, NSString, CNLabelValuePair, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {

	CNLabelValuePair* _labelValuePair;
	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;
	BOOL _isValueMutable;

}

@property (nonatomic,readonly) NSString * localizedLabel; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CNLabelValuePair * labelValuePair;                               //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                                 //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic) int iOSLegacyIdentifier;                                 //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value; 
+(id)allLabels;
+(id)allLabels;
+(id)defaultLabels;
+(id)defaultLabels;
+(id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2 ;
+(id)localizedDisplayStringForLabel:(id)arg1 propertyName:(id)arg2 ;
+(id)allCustomLabels;
+(id)allCustomLabels;
+(void)deleteCustomLabel:(id)arg1 ;
+(void)deleteCustomLabel:(id)arg1 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(id)builtinLabelsForProperty:(id)arg1 ;
+(void*)addressBook;
+(void*)addressBook;
+(/*^block*/id)Value;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)localizedStringForLabel:(id)arg1 ;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)emptyEntries;
+(id)allValuesInArray:(id)arg1 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(Class)contactViewControllerCellClassForPropertyType:(id)arg1 ;
-(NSString *)localizedLabel;
-(NSString *)localizedLabel;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(NSString *)suggestionFoundInBundleId;
-(SGRecordId *)suggestionRecordId;
-(id)init;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(NSDictionary *)storeInfo;
-(id<NSCopying><NSSecureCoding>)value;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSSet *)linkedIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(CNLabelValuePair *)labelValuePair;
-(void)addStoreInfo:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)label;
-(unsigned long long)hash;
-(NSString *)storeIdentifier;
-(NSString *)description;
-(int)iOSLegacyIdentifier;
-(BOOL)isSuggested;
-(id)valueOrigin;
@end

