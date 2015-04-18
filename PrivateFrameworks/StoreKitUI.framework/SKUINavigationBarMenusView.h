//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView
{
    SEL _buttonAction;
    id _buttonTarget;
    struct UIEdgeInsets _contentInset;
    NSArray *_menuViewElements;
}

+ (void)requestLayoutWithMenus:(id)arg1 width:(int)arg2 context:(id)arg3;
+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)reloadWithMenus:(id)arg1 width:(int)arg2 context:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
