//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface PLPhotoTileBadgeView : UIView
{
    int _style;
    int _numberOfPhotos;
    UIView *__backgroundView;
    UIImageView *__badgeImageView;
    UILabel *__textLabel;
}

@property(nonatomic) int numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
- (void)_commonPLPhotoTileBadgeViewInitialization;
- (void)_updateBadgeText;
@property(readonly, nonatomic) UILabel *_textLabel; // @synthesize _textLabel=__textLabel;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateBadgeImage;
@property(readonly, nonatomic) UIImageView *_badgeImageView; // @synthesize _badgeImageView=__badgeImageView;

@end
