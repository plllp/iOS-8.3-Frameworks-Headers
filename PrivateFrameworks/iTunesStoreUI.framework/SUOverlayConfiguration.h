//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject
{
    NSRegularExpression *_bagKeyPattern;
    int _cornerRadius;
    BOOL _shouldShowNavigationBar;
    struct CGSize _size;
    NSString *_transitionName;
    NSRegularExpression *_urlPattern;
}

- (BOOL)matchesURLBagKey:(id)arg1;
- (BOOL)matchesURL:(id)arg1;
@property(readonly, nonatomic) NSString *transitionName; // @synthesize transitionName=_transitionName;
@property(readonly, nonatomic) BOOL shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
@property(readonly, nonatomic) int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)initWithDictionary:(id)arg1;
- (id)init;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)dealloc;

@end
