//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ADPrerollButton, ADVolumeSlider, NSTimer, UIImage, UILabel;

@interface ADPrerollBottomBar : UIView
{
    id <ADPrerollBottomBarDelegate> _delegate;
    BOOL _layoutForExpandedSize;
    BOOL _isFullscreen;
    BOOL _skipButtonCountingDown;
    ADPrerollButton *_actionButton;
    UILabel *_skipLabel;
    UILabel *_shortSkipLabel;
    ADPrerollButton *_skipButton;
    NSTimer *_skipAccumulationTimer;
    UIImage *_playImage;
    UIImage *_pauseImage;
    ADPrerollButton *_playPauseButton;
    ADVolumeSlider *_volumeSlider;
    double _skipDuration;
    double _lastViewingStartTime;
    double _accumulatedViewingTime;
}

- (void)_playButtonTapped:(id)arg1;
@property(retain, nonatomic) ADPrerollButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSTimer *skipAccumulationTimer; // @synthesize skipAccumulationTimer=_skipAccumulationTimer;
- (void)beginCountdownWithDuration:(double)arg1;
@property(nonatomic) double accumulatedViewingTime; // @synthesize accumulatedViewingTime=_accumulatedViewingTime;
@property(nonatomic) double lastViewingStartTime; // @synthesize lastViewingStartTime=_lastViewingStartTime;
- (void)_accumulateViewingTime;
@property(nonatomic) BOOL skipButtonCountingDown; // @synthesize skipButtonCountingDown=_skipButtonCountingDown;
- (void)_updateSkipLabel;
@property(nonatomic) double skipDuration; // @synthesize skipDuration=_skipDuration;
- (void)_resumeCountdown;
- (void)_pauseCountdown;
@property(retain, nonatomic) UIImage *playImage; // @synthesize playImage=_playImage;
- (void)_pauseButtonTapped:(id)arg1;
@property(retain, nonatomic) ADPrerollButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UILabel *shortSkipLabel; // @synthesize shortSkipLabel=_shortSkipLabel;
@property(retain, nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain, nonatomic) UIImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(retain, nonatomic) ADPrerollButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
- (void)_actionButtonTapped:(id)arg1;
@property(retain, nonatomic) ADVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(nonatomic) BOOL layoutForExpandedSize; // @synthesize layoutForExpandedSize=_layoutForExpandedSize;
@property(nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
- (void)displayAsPaused:(BOOL)arg1;
@property(nonatomic) __weak id <ADPrerollBottomBarDelegate> delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_skipButtonTapped:(id)arg1;

@end
