/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXFormattedText : SXJSONObject {

	BOOL shouldWrapText;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) SXJSONArray * inlineTextStyles; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (assign,nonatomic) BOOL shouldWrapText; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)additions;
-(SXJSONArray *)inlineTextStyles;
-(NSString *)textStyle;
-(NSString *)text;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(BOOL)shouldWrapText;
-(id)textWithValue:(id)arg1 withType:(int)arg2 ;
-(void)setShouldWrapText:(BOOL)arg1 ;
@end
