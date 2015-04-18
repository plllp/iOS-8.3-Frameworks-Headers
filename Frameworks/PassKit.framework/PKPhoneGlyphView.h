//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKMicaView.h>

@class CALayer, NSString;

@interface PKPhoneGlyphView : PKMicaView
{
    CALayer *_highlightLayer;
    struct CGPoint _highlightOffscreenPosition;
    struct CGPoint _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
}

- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_startPhoneWiggle;
- (void)_endPhoneWiggle;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;

@end
