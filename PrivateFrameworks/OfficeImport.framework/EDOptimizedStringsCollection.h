//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection
{
    NSMutableDictionary *mStringDictionary;
}

- (unsigned int)addOrEquivalentObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)addObject:(id)arg1;
- (id)init;
- (void)dealloc;

@end

