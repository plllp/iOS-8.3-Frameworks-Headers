//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSValue;

@interface PDBuildMapKey : NSObject <NSCopying>
{
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (void)setGroupId:(id)arg1;
- (id)groupId;
- (id)initWithDrawable:(id)arg1 groupId:(id)arg2;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;

@end

