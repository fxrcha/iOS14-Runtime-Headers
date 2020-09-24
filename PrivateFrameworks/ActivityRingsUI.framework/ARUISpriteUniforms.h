/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUISpriteUniforms : NSObject {

	SCD_Struct_AR1 _uniforms;
	SCD_Struct_AR3 _vertexAttributes;

}

@property (nonatomic,readonly) SCD_Struct_AR3 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR3)vertexAttributes;
-(SCD_Struct_AR1)uniforms;
-(void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2 ;
-(void)_updateUniformsWithSprite:(id)arg1 ;
-(id)initWithSprite:(id)arg1 inContext:(id)arg2 ;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
@end
