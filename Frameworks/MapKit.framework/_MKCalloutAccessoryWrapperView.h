/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKCalloutAccessoryView.h>

@protocol _MKCalloutAccessoryView;
@class UIView, NSString;

@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {

	UIView*<_MKCalloutAccessoryView> _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id)initWithView:(id)arg1 ;
-(id)_mapkit_accessoryControlToExtendWithCallout;
@end

