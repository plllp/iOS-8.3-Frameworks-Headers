//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class UIColor, _SLSheetMaskLayer;

@interface SLSheetMasklayer : CALayer
{
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    struct CGRect _lastBounds;
    struct CGRect _lastMaskRect;
    float _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

- (void).cxx_destruct;
- (void)removeAllAnimations;
- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect)arg1 toSheetFrame:(struct CGRect)arg2 duration:(double)arg3;
- (void)restoreSheetCutout;
- (void)removeSheetCutout;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(float)arg2;
- (void)updateMaskWithBounds:(struct CGRect)arg1 maskRect:(struct CGRect)arg2;
@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) float clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;

@end
