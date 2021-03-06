//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLQLAccountingGroupProtocol.h"

@class NSString;

@interface PLQLAccountingGroup : NSObject <PLQLAccountingGroupProtocol>
{
    short _accountingGroupType;
    NSString *_accountingGroupName;
    CDUnknownBlockType _accountingGroupDefinitionBlock;
}

- (id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 withAccountingGroupDefinitionBlock:(CDUnknownBlockType)arg3;
- (id)genericCreateAccountingEventsInRange:(struct _PLTimeIntervalRange)arg1 withIdentifierKey:(id)arg2 withEventKey:(id)arg3 withStartKey:(id)arg4 withStartValue:(id)arg5 withEndKey:(id)arg6 withEndValue:(id)arg7 withEntries:(id)arg8;
- (id)getEventsInRange:(struct _PLTimeIntervalRange)arg1;
- (id)getLastOpenSnapshot;
- (id)createAccountingEntry:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4;
@property(readonly) CDUnknownBlockType accountingGroupDefinitionBlock; // @synthesize accountingGroupDefinitionBlock=_accountingGroupDefinitionBlock;
- (double)safeTimeForAccounting;
- (double)timeOfLastSnapshot;
- (id)getLastSnapshot;
@property(readonly) short accountingGroupType; // @synthesize accountingGroupType=_accountingGroupType;
@property(readonly, retain) NSString *accountingGroupName; // @synthesize accountingGroupName=_accountingGroupName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

