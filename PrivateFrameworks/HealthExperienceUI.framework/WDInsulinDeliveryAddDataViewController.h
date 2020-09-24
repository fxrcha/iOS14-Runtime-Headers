/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/WDDisplayTypeAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class WDAddDataManualEntryItem, WDAddDataManualEntrySpinner, NSString;

@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate> {

	WDAddDataManualEntryItem* _dateTimeEntryItem;
	WDAddDataManualEntrySpinner* _deliveryReasonEntryItem;

}

@property (nonatomic,retain) WDAddDataManualEntryItem * dateTimeEntryItem;                       //@synthesize dateTimeEntryItem=_dateTimeEntryItem - In the implementation block
@property (nonatomic,retain) WDAddDataManualEntrySpinner * deliveryReasonEntryItem;              //@synthesize deliveryReasonEntryItem=_deliveryReasonEntryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WDAddDataManualEntrySpinner *)deliveryReasonEntryItem;
-(WDAddDataManualEntryItem *)dateTimeEntryItem;
-(void)setDateTimeEntryItem:(WDAddDataManualEntryItem *)arg1 ;
-(void)setDeliveryReasonEntryItem:(WDAddDataManualEntrySpinner *)arg1 ;
-(long long)numberOfSections;
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(id)generateHKObjects;
@end
