//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation
{
    NSData *mData;
}

- (long long)dataLength;
- (id)bufferedInputStream;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (unsigned long)readIntoData:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)inputStream;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)dealloc;

@end
