//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TCFontDatabaseCacheEntry : NSObject
{
    BOOL _bold;
    BOOL _italic;
    NSString *_name;
    int _fontClass;
}

+ (id)newFontDatabaseCacheEntryWithName:(id)arg1 fontClass:(int)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4;
@property(readonly, nonatomic) int fontClass; // @synthesize fontClass=_fontClass;
- (id)initWithName:(id)arg1 fontClass:(int)arg2 bold:(BOOL)arg3 italic:(BOOL)arg4;
@property(readonly, nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(readonly, nonatomic) BOOL bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

