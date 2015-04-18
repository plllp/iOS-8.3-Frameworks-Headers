//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface RCLayoutMetrics : NSObject <NSCopying>
{
    CDStruct_37c9852c _metricInfo;
    NSString *_label;
    float _hPresentedRecordMemoHeight;
}

+ (id)largeHorizontalMetrics;
+ (id)normalVerticalMetrcis;
+ (id)largeVerticalMetrics;
+ (id)defaultMetrics;
@property(nonatomic) float hPresentedRecordMemoHeight; // @synthesize hPresentedRecordMemoHeight=_hPresentedRecordMemoHeight;
@property(readonly, nonatomic) float vDeltaLockNotificationListBottomToRecordingTimeBaseline;
@property(readonly, nonatomic) float vDeltaLockNotificationListBottom;
@property(readonly, nonatomic) float vDeltaLockAbsoluteTopToWaveformTop;
- (float)vDeltaLockNotificationListTopToRecordingTextBaseline;
- (float)vDeltaLockNotificationListTop;
@property(readonly, nonatomic) float hDetailNavigationBarInset;
@property(readonly, nonatomic) float hTrimModeInset;
@property(readonly, nonatomic) float hDeltaAcousticAnnotationLabelToWaveformRight;
@property(readonly, nonatomic) float hDeltaTrimProgressInset;
@property(readonly, nonatomic) float hDeltaAdditionalInsetFromWaveformEdge;
@property(readonly, nonatomic) BOOL hIsWaveformFlushToEdges;
@property(readonly, nonatomic) float vDeltaControlsTopToNavigationBottom;
@property(readonly, nonatomic) float vDeltaDateBaselineToControlsTop;
@property(readonly, nonatomic) float vDeltaTitleBaselineToDateBaseline;
@property(readonly, nonatomic) float vDeltaTimeBaselineToTitleBaseline;
@property(readonly, nonatomic) float vDeltaWaveformToTimeBaseline;
- (void)setMetricInfo:(CDStruct_37c9852c)arg1;
- (id)initWithLabel:(id)arg1;
@property(readonly, nonatomic) float vDeltaControlsBottomToBottom;
@property(readonly, nonatomic) float hDeltaControlButtonsSpacing;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
