//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PKPassPaymentFooterContentView, PKPassView;

@interface PKPassPaymentFooterView : UIView
{
    PKPassView *_passView;
    PKPassPaymentFooterContentView *_contentView;
    int _paymentApplicationState;
    BOOL _isVisible;
    int _state;
}

@property(retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
- (void)setContentView:(id)arg1;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_deleteButtonTapped;
- (void)_lostModeButtonTapped;
- (void)configureForPaymentApplication;
- (void)_configureForState:(int)arg1 withPassView:(id)arg2;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;
- (void)configureForState:(int)arg1 withPassView:(id)arg2;
- (id)initWithPassView:(id)arg1;

@end

