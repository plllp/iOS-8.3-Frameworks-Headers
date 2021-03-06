//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class UISwitch, UITableViewCell;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    UISwitch *_switch;
    id <HKEmergencyCardEnabledDelegate> _enabledDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardEnabledDelegate> enabledDelegate; // @synthesize enabledDelegate=_enabledDelegate;
- (void)_switchSwitched:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (id)titleForFooter;
- (void).cxx_destruct;
- (id)_cell;
- (struct UIEdgeInsets)separatorInset;
- (id)titleForHeader;
- (id)initInEditMode:(BOOL)arg1;

@end

