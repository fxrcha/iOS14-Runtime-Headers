/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(BOOL)contentPresentForAttribute:(int)arg1 ;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(unsigned short)getValueOfAttribute:(int)arg1 ;
-(unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(id)bitwiseAndWith:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
-(id)archivedData;
-(BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)numberOfBitsSet;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(BOOL)diverseContentPresentForAttribute:(int)arg1 ;
-(id)description;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
@end
