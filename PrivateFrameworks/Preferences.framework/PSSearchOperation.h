/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Foundation/NSOperation.h>

@protocol PSSearchOperationDelegate;
@class NSString, NSSet, PSSearchResults;

@interface PSSearchOperation : NSOperation {

	BOOL _newQuery;
	NSString* _query;
	NSSet* _rootEntries;
	PSSearchResults* _currentResults;
	id<PSSearchOperationDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSSet * rootEntries;                   //@synthesize rootEntries=_rootEntries - In the implementation block
@property (copy,readonly) PSSearchResults * currentResults;                //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,getter=isNewQuery,nonatomic) BOOL newQuery;              //@synthesize newQuery=_newQuery - In the implementation block
@property (__weak) id<PSSearchOperationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(CFStringTokenizerRef)_wordBoundaryTokenizer;
-(NSString *)query;
-(id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_systemLanguageHasContinuousScript;
-(id)debugDescription;
-(void)dealloc;
-(void)setDelegate:(id<PSSearchOperationDelegate>)arg1 ;
-(BOOL)isNewQuery;
-(PSSearchResults *)currentResults;
-(void)setNewQuery:(BOOL)arg1 ;
-(id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2 ;
-(id<PSSearchOperationDelegate>)delegate;
-(void)_didCancel;
-(void)main;
-(NSSet *)rootEntries;
-(id)description;
@end

