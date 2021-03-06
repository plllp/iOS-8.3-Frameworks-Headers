//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying>
{
    struct UIEdgeInsets _contentInset;
    float _arrowHeight;
    struct CGSize _preferredContentSize;
    unsigned int _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _targetRect;
    BOOL _constrainToTargetRect;
    struct CGRect _frame;
    float _offset;
    unsigned int _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    NSMutableArray *_candidates;
}

+ (id)_observationKeys;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(nonatomic) float arrowHeight; // @synthesize arrowHeight=_arrowHeight;
- (void)setProperties:(CDUnknownBlockType)arg1;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned int)arg2;
@property(nonatomic) BOOL preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic) BOOL constrainToTargetRect; // @synthesize constrainToTargetRect=_constrainToTargetRect;
@property(nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) unsigned int preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
- (void)_updateOutputs;
@property(readonly, nonatomic) unsigned int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (id)candidates;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)init;
- (void)dealloc;

@end

