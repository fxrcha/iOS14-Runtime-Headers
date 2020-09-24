/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDMailboxProvider <EMMailboxTypeResolver>
@property (assign,nonatomic,__weak) id<EDMailboxProviderDelegate> delegate; 
@required
-(id)mailboxForObjectID:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)fetchMailboxes;
-(id<EDMailboxProviderDelegate>)delegate;
-(id)allMailboxes;
-(id)legacyMailboxForObjectID:(id)arg1;

@end
