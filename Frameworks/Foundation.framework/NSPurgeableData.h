//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableData.h"

#import "NSDiscardableContent.h"

@interface NSPurgeableData : NSMutableData <NSDiscardableContent>
{
    unsigned int _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)finalize;
- (void *)mutableBytes;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)setLength:(unsigned int)arg1;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)length;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)_destroyMemory;
- (id)initWithBytes:(void *)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;

@end

