/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKit/UIActivityItemSource.h>
#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSItemProvider, NSString, NSURL;

@interface VUIShareURLActivityItem : NSObject <UIActivityItemSource, UIActivityItemLinkPresentationSource> {

	NSItemProvider* _itemProvider;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _imageURL;
	NSURL* _shareURL;

}

@property (nonatomic,readonly) NSURL * shareURL;                    //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)shareURL;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4 ;
@end
