/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid {

	BOOL _fakeIsSpecialMailboxUid;
	NSString* _displayName;
	NSString* _fakeFullPath;
	NSString* _fakeURLString;
	long long _fakeMailboxID;

}

@property (nonatomic,copy) NSString * fakeFullPath;                     //@synthesize fakeFullPath=_fakeFullPath - In the implementation block
@property (nonatomic,copy) NSString * fakeURLString;                    //@synthesize fakeURLString=_fakeURLString - In the implementation block
@property (assign,nonatomic) BOOL fakeIsSpecialMailboxUid;              //@synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid - In the implementation block
@property (assign,nonatomic) long long fakeMailboxID;                   //@synthesize fakeMailboxID=_fakeMailboxID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(id)URLString;
-(id)store;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)URL;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isStore;
-(id)fullPath;
-(long long)fakeMailboxID;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 mailboxID:(long long)arg5 ;
-(void)setFakeURLString:(NSString *)arg1 ;
-(void)setFakeFullPath:(NSString *)arg1 ;
-(void)setFakeIsSpecialMailboxUid:(BOOL)arg1 ;
-(void)setFakeMailboxID:(long long)arg1 ;
-(NSString *)fakeURLString;
-(NSString *)fakeFullPath;
-(BOOL)fakeIsSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 ;
-(long long)mailboxID;
@end

