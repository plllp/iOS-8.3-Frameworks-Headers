//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl
{
    NSArray *_buttons;
    int _selectedTitleIndex;
}

@property(nonatomic) int selectedTitleIndex; // @synthesize selectedTitleIndex=_selectedTitleIndex;
- (void)_reloadSelectedButton;
- (void)_buttonAction:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *titles;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

@end

