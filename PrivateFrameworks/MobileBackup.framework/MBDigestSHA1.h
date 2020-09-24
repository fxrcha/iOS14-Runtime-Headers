/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(id)final;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
@end
