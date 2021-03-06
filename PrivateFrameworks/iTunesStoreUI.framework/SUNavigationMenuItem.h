//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, SUItemContentRating;

@interface SUNavigationMenuItem : NSObject <NSCopying>
{
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property(readonly, nonatomic) SUItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end

