/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNGreedyClusteringReadOnly.h>
#import <libobjc.A.dylib/VNClusteringWritable.h>

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {

	shared_ptr<vision::mod::FaceClustering>* m_ClusteringImpl;

}
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)_cancellableUpdate:(ImageDescriptorBufferAbstract*)arg1 facesToMove:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg2 requestRevision:(unsigned long long)arg3 ;
@end

