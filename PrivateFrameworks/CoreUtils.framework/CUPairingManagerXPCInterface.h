/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUPairingManagerXPCInterface
@optional
-(void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
-(void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2;
-(void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2;
-(void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2;
-(void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2;

@end

