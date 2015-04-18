//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class GKPlayer, GKPlayerPhotoView, NSDictionary, UILabel;

@interface GKBasePlayerCell : GKCollectionViewCell
{
    UILabel *_nameLabel;
    GKPlayerPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

+ (float)defaultRowHeight;
+ (id)itemHeightList;
+ (id)padMetrics;
+ (id)itemHeightListForIdiom:(int)arg1;
+ (id)phoneMetrics;
+ (BOOL)requiresConstraintBasedLayout;
+ (void)initialize;
@property(retain, nonatomic) GKPlayer *player;
@property(retain, nonatomic) NSDictionary *metricsOverrides; // @synthesize metricsOverrides=_metricsOverrides;
- (BOOL)canRemoveItem;
- (void)setRepresentedItem:(id)arg1;
- (struct CGRect)alignmentRectForText;
- (void)didUpdateModel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GKPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
