//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray, UILabel, UISwitch, UIView;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem
{
    UIView *_footerView;
    UILabel *_descriptionLabel;
    BOOL _underlyingCalendarState;
    BOOL _switchState;
    BOOL _allowEventAlerts;
    NSMutableArray *_cells;
    UISwitch *_toggleSwitch;
}

@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (id)footerView;
- (void).cxx_destruct;
- (id)cell;
- (void)reset;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
@property(nonatomic) BOOL allowEventAlerts; // @synthesize allowEventAlerts=_allowEventAlerts;
@property(nonatomic) BOOL switchState; // @synthesize switchState=_switchState;
- (void)_switchStateChanged:(id)arg1;
- (id)descriptionLabelText;
- (id)cellText;
@property(nonatomic) BOOL underlyingCalendarState; // @synthesize underlyingCalendarState=_underlyingCalendarState;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)layoutForWidth:(float)arg1;
- (float)footerHeightForSection;
- (id)footerViewForSection;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (BOOL)saveStateToCalendar:(id)arg1;
- (unsigned int)numberOfSubitems;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;

@end

