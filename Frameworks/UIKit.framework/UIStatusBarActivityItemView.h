//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView
{
    UIActivityIndicatorView *_activityIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
    BOOL _newsstandActivity;
}

- (int)_activityIndicatorStyle;
- (void)_startAnimating;
- (void)_stopAnimating;
- (float)shadowPadding;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(BOOL)arg1;
- (void)dealloc;

@end
