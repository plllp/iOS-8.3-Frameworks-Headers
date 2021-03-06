//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUTransportControlsView, UIButton<MPUTransportButton>, UIColor, UIImage;

@protocol MPUTransportControlsViewDelegate <NSObject>
- (UIImage *)transportControlsView:(MPUTransportControlsView *)arg1 imageForTransportButtonWithControlType:(int)arg2;

@optional
- (UIColor *)transportControlsView:(MPUTransportControlsView *)arg1 colorForButtonWithControlType:(int)arg2;
- (struct CGSize)transportControlsView:(MPUTransportControlsView *)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(struct CGSize)arg2;
- (struct CGRect)transportControlsView:(MPUTransportControlsView *)arg1 adjustedFrameOfTransportButtonWithControlType:(int)arg2 proposedFrame:(struct CGRect)arg3;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 prepareTransportButton:(UIButton<MPUTransportButton> *)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 tapOnAccessoryButtonType:(int)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 longPressEndOnControlType:(int)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 longPressBeginOnControlType:(int)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 tapOnControlType:(int)arg2;
@end

