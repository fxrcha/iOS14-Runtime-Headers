/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)string;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)_invertedSkipSet;
-(void)dealloc;
-(id)locale;
-(id)charactersToBeSkipped;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)scanLocation;
-(BOOL)scanInt:(int*)arg1 ;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
@end
