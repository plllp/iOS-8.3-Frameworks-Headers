//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary *_store;
}

+ (void)archiveSet:(id)arg1;
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(int)arg2 orientation:(int)arg3;
+ (id)sliceSetForID:(id)arg1;
+ (id)sharedStore;
- (void)addSet:(id)arg1;
- (id)sliceSetForID:(id)arg1;
- (id)init;
- (void)dealloc;

@end
