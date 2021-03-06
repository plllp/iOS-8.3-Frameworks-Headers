//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_pattern;
    unsigned int _options;
    void *_internal;
    id _reserved1;
    int _checkout;
    int _reserved2;
}

+ (id)regularExpressionWithPattern:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)escapedPatternForString:(id)arg1;
+ (void)initialize;
+ (id)escapedTemplateForString:(id)arg1;
@property(readonly, copy) NSString *pattern;
- (void)finalize;
- (id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (id)firstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (unsigned int)numberOfMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (unsigned int)replaceMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 withTemplate:(id)arg4;
- (id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(int)arg3 template:(id)arg4;
- (id)matchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)initWithPattern:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
@property(readonly) unsigned int options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly) unsigned int numberOfCaptureGroups;

@end

