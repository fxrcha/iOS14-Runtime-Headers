/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SWMediaSettings : NSObject {

	BOOL _fullScreenEnabled;
	unsigned long long _mediaTypesRequiringUserActionForPlayback;

}

@property (nonatomic,readonly) unsigned long long mediaTypesRequiringUserActionForPlayback;              //@synthesize mediaTypesRequiringUserActionForPlayback=_mediaTypesRequiringUserActionForPlayback - In the implementation block
@property (nonatomic,readonly) BOOL fullScreenEnabled;                                                   //@synthesize fullScreenEnabled=_fullScreenEnabled - In the implementation block
-(BOOL)fullScreenEnabled;
-(unsigned long long)mediaTypesRequiringUserActionForPlayback;
-(id)initWithMediaTypesRequiringUserActionForPlayback:(unsigned long long)arg1 fullScreenEnabled:(BOOL)arg2 ;
@end
