/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailDescriptor;

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest {

	unsigned long long _folderType;
	DOCThumbnailDescriptor* _descriptor;

}
-(void)generateThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFolderType:(unsigned long long)arg1 descriptor:(id)arg2 ;
@end

