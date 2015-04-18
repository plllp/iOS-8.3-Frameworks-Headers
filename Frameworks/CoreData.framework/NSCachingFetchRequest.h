//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSFetchRequest.h>

@class NSDictionary, NSMutableSet;

@interface NSCachingFetchRequest : NSFetchRequest
{
    NSDictionary *_substitutionVariables;
    NSMutableSet *_cachingCoordinators;
    BOOL _hasCachedInfo;
    id _identifier;
}

+ (id)_generateIdentifier;
@property(readonly, nonatomic) id _identifier; // @synthesize _identifier;
- (id)init;
- (void)dealloc;
@property(copy, nonatomic) NSDictionary *substitutionVariables;
- (void)_sanityCheckVariables:(id)arg1;
- (void)_registerCachingCoordinator:(id)arg1;

@end
