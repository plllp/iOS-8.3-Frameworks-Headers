//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PUCloudSharedBackdropView : UIView
{
    UIView *_backdropView;
    BOOL _isMask;
    BOOL _hasRoundedCorners;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
- (id)initWithFrame:(struct CGRect)arg1 asMask:(BOOL)arg2;

@end
