//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator
{
    int _focusBubbleType;
}

+ (float)preferredDuration;
- (BOOL)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;
- (BOOL)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(union _GLKVector3)arg3 context:(id)arg4;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (double)minimumDurationForViewAnimations;
- (int)animatorType;
@property(nonatomic) int focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
- (void)animateTransition:(id)arg1;

@end

