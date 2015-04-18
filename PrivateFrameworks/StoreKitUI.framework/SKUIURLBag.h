//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSURLBag.h"

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface SKUIURLBag : SSURLBag
{
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

+ (id)URLBagForContext:(id)arg1;
- (id)existingBagDictionary;
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)storeFrontIdentifier;

@end
