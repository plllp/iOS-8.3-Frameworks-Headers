//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _UIReflectingView : UIView
{
    UIView *_containerView;
    UIView *_gradientView;
    float _reflectionAlpha;
}

@property(nonatomic) float reflectionFraction;
- (void)_updateGradientColors;
@property(nonatomic) float reflectionAlpha;
- (id)_gradientLayer;
@property(readonly, retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

