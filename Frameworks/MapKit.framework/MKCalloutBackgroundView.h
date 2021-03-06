//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverBackgroundView.h"

@class NSMutableArray, UIColor, UIImageView, UIView, _MKCalloutBackgroundMaskView;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    float _arrowOffset;
    unsigned int _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    unsigned int _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
}

+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg1;
+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;
+ (BOOL)wantsDefaultContentAppearance;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
@property(nonatomic) unsigned int mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void)_hideArrow;
- (void)_showArrow;
- (struct UIEdgeInsets)_contentViewInsets;
- (float)arrowOffset;
- (void)setArrowOffset:(float)arg1;
- (id)_shadowPath;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_extendLeftRightArrow;
- (void)_retractUpDownArrow;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2;
- (void)_setupViews;
@property(readonly, nonatomic) UIColor *calloutBackgroundColor;
- (id)newMaskLayer;

@end

