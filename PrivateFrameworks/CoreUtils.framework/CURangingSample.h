/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface CURangingSample : NSObject {

	int _channel;
	int _rawRSSI;
	NSData* _deviceAddress;
	NSString* _deviceModel;

}

@property (assign,nonatomic) int channel;                       //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) int rawRSSI;                       //@synthesize rawRSSI=_rawRSSI - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setChannel:(int)arg1 ;
-(int)channel;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setRawRSSI:(int)arg1 ;
-(int)rawRSSI;
-(id)description;
@end

