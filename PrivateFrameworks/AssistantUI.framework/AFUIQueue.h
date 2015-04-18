//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface AFUIQueue : NSObject <NSFastEnumeration>
{
    id <AFUIQueueDelegate> _delegate;
    NSMutableArray *_objects;
}

- (void)enqueueObjects:(id)arg1;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (void)enqueueObject:(id)arg1;
@property(readonly, nonatomic) id frontObject;
@property(readonly, nonatomic, getter=_objects) NSMutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AFUIQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (id)objectAtIndex:(int)arg1;
@property(readonly, nonatomic) int count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end
