//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem
{
    HKMedicalIDPersonSummaryCell *_cell;
}

- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (BOOL)hasPresentableData;
- (void).cxx_destruct;
- (id)_cell;
- (struct UIEdgeInsets)separatorInset;
- (void)setData:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;

@end

