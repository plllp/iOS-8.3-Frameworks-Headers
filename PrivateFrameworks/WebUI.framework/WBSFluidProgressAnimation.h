//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    float _initialPosition;
    float _destinationPosition;
    double _animationDuration;
}

@property(nonatomic) float destinationPosition; // @synthesize destinationPosition=_destinationPosition;
@property(nonatomic) float initialPosition; // @synthesize initialPosition=_initialPosition;
- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;

@end

