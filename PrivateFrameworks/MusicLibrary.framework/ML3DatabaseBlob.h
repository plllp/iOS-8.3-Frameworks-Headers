//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ML3DatabaseBlob : NSObject
{
    struct sqlite3_blob *_sqliteHandle;
}

- (int)writeData:(id)arg1 numberOfBytes:(unsigned int)arg2 offset:(unsigned int)arg3;
- (id)initWithSQLiteHandle:(struct sqlite3_blob *)arg1;
- (int)readData:(id)arg1 numberOfBytes:(unsigned int)arg2 offset:(unsigned int)arg3;
- (id)data;
- (unsigned int)length;
- (id)init;
- (void)dealloc;

@end
