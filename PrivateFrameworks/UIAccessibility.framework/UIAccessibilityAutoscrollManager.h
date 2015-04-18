//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject
{
    BOOL _autoscrolling;
    UIScrollView *_scrollView;
    int _scrollDirection;
    float _autoscrollSpeed;
}

+ (id)sharedInstance;
- (void)_autoscroll;
@property(nonatomic, getter=isAutoscrolling) BOOL autoscrolling; // @synthesize autoscrolling=_autoscrolling;
@property(nonatomic) float autoscrollSpeed; // @synthesize autoscrollSpeed=_autoscrollSpeed;
- (void)scrollToBottom;
- (void)decrementAutoscrollSpeed;
- (void)incrementAutoscrollSpeed;
- (void)autoscrollInDirection:(int)arg1;
- (int)availableAutoscrollDirections;
- (void)scrollToTop;
- (void)pause;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (id)init;
- (void)dealloc;

@end
