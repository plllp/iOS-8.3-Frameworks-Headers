//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}

- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (id)columnInfoForColumnNumber:(int)arg1;
- (void)dealloc;

@end
