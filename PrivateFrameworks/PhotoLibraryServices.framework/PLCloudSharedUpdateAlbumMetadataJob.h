//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
{
    NSDictionary *_metadata;
}

+ (void)updateAlbumMetadata:(id)arg1;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void)run;
- (id)description;
- (void)dealloc;

@end
