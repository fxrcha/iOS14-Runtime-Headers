/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentAnchor.h>
@class NSString;


@protocol SXComponentAnchor <NSObject>
@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
@required
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;

@end


@class NSString;

@interface SXComponentAnchor : NSObject <SXComponentAnchor> {

	NSString* _targetComponentIdentifier;
	long long _targetAnchorPosition;
	long long _originAnchorPosition;
	NSRange _range;

}

@property (assign,nonatomic) long long targetAnchorPosition;                      //@synthesize targetAnchorPosition=_targetAnchorPosition - In the implementation block
@property (assign,nonatomic) long long originAnchorPosition;                      //@synthesize originAnchorPosition=_originAnchorPosition - In the implementation block
@property (assign,nonatomic) NSRange range;                                       //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * targetComponentIdentifier;              //@synthesize targetComponentIdentifier=_targetComponentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)description;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(id)initWithTargetComponentIdentifier:(id)arg1 ;
-(void)setTargetAnchorPosition:(long long)arg1 ;
-(void)setOriginAnchorPosition:(long long)arg1 ;
@end

