/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SXCollectionRowLayout : NSObject {

	unsigned long long _intendedComponentsPerRow;
	unsigned long long _componentsPerRow;
	double _leftMargin;
	double _rightMargin;
	double _componentWidth;
	double _spaceBetweenComponents;

}

@property (assign,nonatomic) unsigned long long intendedComponentsPerRow;              //@synthesize intendedComponentsPerRow=_intendedComponentsPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long componentsPerRow;                      //@synthesize componentsPerRow=_componentsPerRow - In the implementation block
@property (assign,nonatomic) double leftMargin;                                        //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double rightMargin;                                       //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) double componentWidth;                                    //@synthesize componentWidth=_componentWidth - In the implementation block
@property (assign,nonatomic) double spaceBetweenComponents;                            //@synthesize spaceBetweenComponents=_spaceBetweenComponents - In the implementation block
-(double)leftMargin;
-(double)rightMargin;
-(void)setRightMargin:(double)arg1 ;
-(id)description;
-(void)setLeftMargin:(double)arg1 ;
-(unsigned long long)componentsPerRow;
-(double)componentWidth;
-(double)spaceBetweenComponents;
-(unsigned long long)intendedComponentsPerRow;
-(void)setIntendedComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentWidth:(double)arg1 ;
-(void)setSpaceBetweenComponents:(double)arg1 ;
@end

