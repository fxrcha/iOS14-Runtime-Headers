/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSString;

@interface PDFFormFieldPrivateVars : NSObject {

	PDFDocument* document;
	CGRect bounds;
	int fieldType;
	long long buttonType;
	NSString* fieldName;
	NSString* stringValue;
	NSString* defaultStringValue;
	BOOL writeDefaultValue;
	CFDictionaryRef dictionary;

}
@end
