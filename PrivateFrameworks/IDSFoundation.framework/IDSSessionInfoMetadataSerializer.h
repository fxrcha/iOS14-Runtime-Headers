/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSSessionInfoMetadataSerializer : NSObject
+(id)serializeSessionInfoMetadata:(id)arg1 ;
+(void)_writeStringToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeNumberToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeArrayToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readArrayFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readDictionaryFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)deserializeSessionInfoMetadata:(id)arg1 ;
@end

