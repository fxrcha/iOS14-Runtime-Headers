/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>
#import <libobjc.A.dylib/WBSIconResponse.h>

@class UIImage, UIColor, NSString;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse> {

	BOOL _generated;
	UIImage* _touchIcon;
	UIColor* _extractedBackgroundColor;

}

@property (nonatomic,readonly) UIImage * touchIcon;                             //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,readonly) UIColor * extractedBackgroundColor;              //@synthesize extractedBackgroundColor=_extractedBackgroundColor - In the implementation block
@property (getter=isGenerated,nonatomic,readonly) BOOL generated;               //@synthesize generated=_generated - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isGenerated;
-(UIColor *)extractedBackgroundColor;
-(UIImage *)icon;
-(UIImage *)touchIcon;
-(id)initWithURL:(id)arg1 touchIcon:(id)arg2 generated:(BOOL)arg3 extractedBackgroundColor:(id)arg4 ;
-(NSString *)description;
@end

