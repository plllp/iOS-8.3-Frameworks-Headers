//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, WDText;

@interface WDAnnotationData : NSObject
{
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void)setOwner:(id)arg1;
- (id)owner;
- (id)initWithText:(id)arg1;
- (void)setDate:(id)arg1;
- (id)text;
- (id)date;
- (void)dealloc;

@end

