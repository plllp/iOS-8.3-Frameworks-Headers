//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject
{
    unsigned int _index;
    MPMediaQuery *_itemsQuery;
}

- (id)initWithIndex:(unsigned int)arg1 itemsQuery:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(readonly, nonatomic) MPMediaQuery *itemsQuery; // @synthesize itemsQuery=_itemsQuery;

@end

