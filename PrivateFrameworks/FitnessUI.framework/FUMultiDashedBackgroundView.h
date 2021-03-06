//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FitnessUI/FUChartBackgroundView.h>

@class UIColor, UIView;

@interface FUMultiDashedBackgroundView : FUChartBackgroundView
{
    unsigned int _numSubLines;
    UIColor *_lineColor;
    UIColor *_subLineColor;
    UIView *_lastLineView;
    BOOL _backgroundIsTransparent;
    float _lineWidth;
    float _lineSpacing;
    float _subLineHeight;
}

@property(nonatomic) BOOL backgroundIsTransparent; // @synthesize backgroundIsTransparent=_backgroundIsTransparent;
@property(nonatomic) float subLineHeight; // @synthesize subLineHeight=_subLineHeight;
- (id)_linesPatternColor;
- (void).cxx_destruct;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

