//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OADTextListStyle : NSObject
{
    NSMutableArray *mParagraphProperties;
}

- (void)setPropertiesForListLevel:(unsigned int)arg1 properties:(id)arg2;
- (void)flatten;
- (void)overrideWithTextStyle:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)initWithDefaults;
- (void)removeUnnecessaryOverrides;
- (id)defaultProperties;
- (id)propertiesForListLevel:(unsigned int)arg1;
- (id)init;
- (void)dealloc;

@end

