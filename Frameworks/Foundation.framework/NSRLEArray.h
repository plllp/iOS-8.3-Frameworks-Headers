//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>
{
    struct _NSRefCountedRunArray *theList;
}

- (void)finalize;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (unsigned int)count;
- (void)dealloc;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg1;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg1;
- (id)objectAtRunIndex:(unsigned int)arg1 length:(unsigned int *)arg2;
- (id)objectAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2 runIndex:(unsigned int *)arg3;
- (id)objectAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;

@end
