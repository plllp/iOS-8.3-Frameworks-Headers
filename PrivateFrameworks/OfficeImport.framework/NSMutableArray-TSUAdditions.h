//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface NSMutableArray (TSUAdditions)
- (void)trimObjectsFromIndex:(unsigned int)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)push_tsu:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)pop_tsu;
@end
