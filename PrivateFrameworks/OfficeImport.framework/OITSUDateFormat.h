//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSUDataFormat.h"

@class NSString;

@interface OITSUDateFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString *mFormat;
    NSString *mName;
}

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;
- (id)format;
- (void)setFormatName:(id)arg1;
- (id)formatName;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
