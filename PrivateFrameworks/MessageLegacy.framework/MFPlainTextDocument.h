/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(id)string;
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
-(unsigned long long)fragmentCount;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned)arg3 ;
-(id)quotedString:(unsigned)arg1 ;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
@end
