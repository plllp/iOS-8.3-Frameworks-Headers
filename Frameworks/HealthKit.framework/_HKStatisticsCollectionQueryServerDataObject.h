//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

@interface _HKStatisticsCollectionQueryServerDataObject : _HKQueryServerDataObject
{
    NSDate *_anchorDate;
    unsigned int _options;
    NSDateComponents *_intervalComponents;
    unsigned int _mergeStrategy;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
- (void).cxx_destruct;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(retain, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;

@end

