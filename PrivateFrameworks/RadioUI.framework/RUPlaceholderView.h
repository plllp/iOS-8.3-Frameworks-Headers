//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MPUVignetteBackgroundView, UIAlertView, _UIContentUnavailableView;

@interface RUPlaceholderView : UIView
{
    MPUVignetteBackgroundView *_backgroundView;
    _UIContentUnavailableView *_contentUnavailableView;
    UIAlertView *_useCellularAlertView;
    BOOL _cellularNetworkingAllowed;
    int _style;
}

@property(nonatomic) BOOL cellularNetworkingAllowed; // @synthesize cellularNetworkingAllowed=_cellularNetworkingAllowed;
- (void)_useCellularAction:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
