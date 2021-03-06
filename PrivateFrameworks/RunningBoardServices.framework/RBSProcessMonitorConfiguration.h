/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSHashTable, NSString, NSArray, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding> {

	NSHashTable* _matchedHandles;
	NSString* _desc;
	int _clientPid;
	unsigned _serviceClass;
	unsigned long long _identifier;
	NSArray* _predicates;
	RBSProcessStateDescriptor* _stateDescriptor;
	unsigned long long _events;
	/*^block*/id _updateHandler;
	/*^block*/id _preventLaunchUpdateHandler;

}

@property (nonatomic,readonly) unsigned long long identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int clientPid;                                        //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,copy) NSArray * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,copy) RBSProcessStateDescriptor * stateDescriptor;              //@synthesize stateDescriptor=_stateDescriptor - In the implementation block
@property (assign,nonatomic) unsigned serviceClass;                                  //@synthesize serviceClass=_serviceClass - In the implementation block
@property (assign,nonatomic) unsigned long long events;                              //@synthesize events=_events - In the implementation block
@property (nonatomic,copy) id updateHandler;                                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id preventLaunchUpdateHandler;                            //@synthesize preventLaunchUpdateHandler=_preventLaunchUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(NSArray *)predicates;
-(unsigned long long)identifier;
-(unsigned long long)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEvents:(unsigned long long)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)setServiceClass:(unsigned)arg1 ;
-(NSString *)debugDescription;
-(id)updateHandler;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)setPreventLaunchUpdateHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(RBSProcessStateDescriptor *)stateDescriptor;
-(unsigned)serviceClass;
-(id)preventLaunchUpdateHandler;
-(void)setStateDescriptor:(RBSProcessStateDescriptor *)arg1 ;
-(void)setPreventLaunchUpdateHandle:(/*^block*/id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(void)setPredicates:(NSArray *)arg1 ;
-(id)matchedProcesses;
-(unsigned long long)hash;
-(int)clientPid;
-(NSString *)description;
@end

