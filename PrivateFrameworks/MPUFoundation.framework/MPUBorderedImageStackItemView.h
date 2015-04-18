//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPUFoundation/MPUImageStackItemView.h>

@class MPUBorderConfiguration, MPUBorderDrawingCache, UIImageView;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView
{
    UIImageView *_borderImageView;
    MPUBorderConfiguration *_borderConfiguration;
    MPUBorderDrawingCache *_borderDrawingCache;
}

@property(retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // @synthesize borderDrawingCache=_borderDrawingCache;
@property(copy, nonatomic) MPUBorderConfiguration *borderConfiguration; // @synthesize borderConfiguration=_borderConfiguration;
- (void)_borderDrawingCacheWasInvalidated:(id)arg1;
- (void)_updateBorderImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
