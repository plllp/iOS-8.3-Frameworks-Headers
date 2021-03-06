//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "CalendarEventAlarmTableDelegate.h"

@class CalendarEventAlarmTable, EKCalendar, EKUIAlarm, NSString;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate>
{
    CalendarEventAlarmTable *_table;
    BOOL _immediateAlarmCreation;
    BOOL _allDay;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
    BOOL _shouldShowLeaveNowOption;
    BOOL _eventHasTravelTime;
    EKUIAlarm *_alarm;
    EKCalendar *_calendar;
    unsigned int _alarmIndex;
}

@property(nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
- (void).cxx_destruct;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)tableHeaderView;
@property(nonatomic) BOOL shouldShowLeaveNowOption; // @synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption;
- (void)setCustomString:(id)arg1;
@property(nonatomic) int presetIdentifier;
@property(nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // @synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate;
- (void)alarmTableDidChangeAlarm:(id)arg1;
@property(nonatomic) unsigned int alarmIndex; // @synthesize alarmIndex=_alarmIndex;
- (BOOL)customSelected;
@property(retain, nonatomic) EKUIAlarm *alarm; // @synthesize alarm=_alarm;
@property(nonatomic) BOOL eventHasTravelTime; // @synthesize eventHasTravelTime=_eventHasTravelTime;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (void)_storeChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

