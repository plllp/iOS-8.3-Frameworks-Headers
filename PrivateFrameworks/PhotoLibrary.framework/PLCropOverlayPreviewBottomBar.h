//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView
{
    int _backgroundStyle;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    UIButton *_playbackButton;
}

- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
- (void)_updateBackgroundStyle;
@property(readonly, nonatomic) UIButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

