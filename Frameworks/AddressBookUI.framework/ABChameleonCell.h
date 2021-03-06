//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface ABChameleonCell : UITableViewCell
{
    int _abCellStyle;
    id <ABStyleProvider> _styleProvider;
    BOOL _hasConfiguredBackgroundViews;
}

- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (void)_updateTextStylesForCellStyle;
- (void)_updateBackgroundViewsForCellStyleAndLocation;
@property(nonatomic) int abCellStyle; // @synthesize abCellStyle=_abCellStyle;

@end

