//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

@class NSString, UIImageView, UILabel;

@interface CKTitledImageBalloonView : CKImageBalloonView
{
    UIImageView *_chevron;
    UILabel *_titleLabel;
}

- (void)configureForLocatingChatItem:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(BOOL)arg3;
- (void)tapGestureRecognized:(id)arg1;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setOrientation:(BOOL)arg1;
- (void)prepareForReuse;
- (struct UIEdgeInsets)alignmentRectInsets;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <CKTitledImageBalloonViewDelegate> delegate;

@end

