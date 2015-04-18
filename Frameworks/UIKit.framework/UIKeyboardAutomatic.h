//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard
{
    BOOL showsCandidateBar;
    BOOL showsCandidateInline;
    BOOL receivedCandidatesInCurrentInputMode;
    BOOL caretBlinks;
}

- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)arg1;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (BOOL)_isAutomaticKeyboard;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)maximize;
- (void)minimize;
@property(nonatomic) BOOL receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;
@property(nonatomic) BOOL showsCandidateInline; // @synthesize showsCandidateInline;
@property(nonatomic) BOOL caretBlinks; // @synthesize caretBlinks;
@property(nonatomic) BOOL showsCandidateBar; // @synthesize showsCandidateBar;
- (void)activate;
- (BOOL)isActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
