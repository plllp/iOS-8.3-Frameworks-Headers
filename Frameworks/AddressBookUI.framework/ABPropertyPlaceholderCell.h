//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABLabeledCell.h>

@class UILabel;

@interface ABPropertyPlaceholderCell : ABLabeledCell
{
    UILabel *_label;
}

- (BOOL)shouldPerformDefaultAction;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)dealloc;
- (float)minCellHeight;
- (id)labelView;
- (void)setCardGroupItem:(id)arg1;

@end

