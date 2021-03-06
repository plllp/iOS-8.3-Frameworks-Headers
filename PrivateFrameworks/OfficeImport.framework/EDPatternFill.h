//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDFill.h>

@class EDColorReference;

@interface EDPatternFill : EDFill
{
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (BOOL)isEqualToPatternFill:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setForeColor:(id)arg1;
- (id)backColorReference;
- (id)foreColorReference;
- (void)setBackColorReference:(id)arg1;
- (void)setForeColorReference:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)backColor;
- (id)foreColor;
- (_Bool)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

