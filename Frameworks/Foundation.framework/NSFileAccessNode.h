//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned int _symbolicLinkReferenceCount;
    NSMutableDictionary *_childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackageIsFigured;
    BOOL _isFilePackage;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

- (id)parent;
- (void)setProvider:(id)arg1;
- (id)standardizedURL;
- (id)url;
- (id)description;
- (void)dealloc;
- (void)assertDescendantsLive;
- (void)assertDead;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(BOOL)arg2;
- (id)_childrenExcludingExcessNodes:(BOOL)arg1;
- (BOOL)_mayContainCriticalDebuggingInformation;
- (void)assertLive;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)pathExceptPrivate;
- (void)forEachAccessClaimOnItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)biggestFilePackageLocation;
- (void)forEachDescendantPerformProcedure:(CDUnknownBlockType)arg1;
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (id)normalizationOfChildName:(id)arg1;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)removeSelfIfUseless;
- (void)removeAccessClaim:(id)arg1;
- (void)addAccessClaim:(id)arg1;
- (BOOL)itemIsSubarbitrable;
- (void)forEachRelevantAccessClaimPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (BOOL)itemIsFilePackage;
- (void)forEachPresenterOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(CDUnknownBlockType)arg1;
- (BOOL)itemIsInItemAtLocation:(id)arg1;
- (BOOL)itemIsItemAtLocation:(id)arg1;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)sensitiveDescription;
- (void)setArbitrationBoundary;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;
- (void)setParent:(id)arg1 name:(id)arg2;
- (void)forEachProgressPublisherOfItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 forAddingLeafNode:(id)arg3 create:(BOOL)arg4;
- (id)pathFromAncestor:(id)arg1;
- (id)itemProvider;
- (void)forEachPresenterOfContainingItemPerformProcedure:(CDUnknownBlockType)arg1;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(BOOL)arg3;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;

@end

