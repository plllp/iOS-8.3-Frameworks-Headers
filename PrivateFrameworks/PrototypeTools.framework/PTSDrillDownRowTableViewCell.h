//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIButton;

@interface PTSDrillDownRowTableViewCell : PTSRowTableViewCell
{
    UIButton *_actionButton;
}

- (void)_actionPress;
- (void)_destroyActionButton;
- (void)_createActionButton;
- (void)updateCellCharacteristics;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

