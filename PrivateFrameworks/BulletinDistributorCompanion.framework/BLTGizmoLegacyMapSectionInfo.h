/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, BBSectionIcon, NSString;

@interface BLTGizmoLegacyMapSectionInfo : NSObject {

	NSDictionary* _notificationMap;
	BBSectionIcon* _icon;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * mappedSectionID; 
@property (nonatomic,copy,readonly) NSString * mappedParentSectionID; 
@property (nonatomic,retain) BBSectionIcon * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(id)initWithNotificationMap:(id)arg1 ;
-(NSString *)mappedSectionID;
-(NSString *)mappedParentSectionID;
@end

