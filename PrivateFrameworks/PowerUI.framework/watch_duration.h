/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface watch_duration : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)loadWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithMLModel:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromPlugin_hour:(double)arg1 plugin_battery_level:(double)arg2 time_from_plugin:(double)arg3 med_dur_1:(double)arg4 med_dur_2:(double)arg5 med_dur_4:(double)arg6 med_dur_8:(double)arg7 med_dur_16:(double)arg8 med_dur_24:(double)arg9 cnt_dur_1:(double)arg10 cnt_dur_2:(double)arg11 cnt_dur_4:(double)arg12 cnt_dur_8:(double)arg13 cnt_dur_16:(double)arg14 cnt_dur_24:(double)arg15 std_dur_1:(double)arg16 std_dur_2:(double)arg17 std_dur_4:(double)arg18 std_dur_8:(double)arg19 std_dur_16:(double)arg20 std_dur_24:(double)arg21 error:(id*)arg22 ;
@end

