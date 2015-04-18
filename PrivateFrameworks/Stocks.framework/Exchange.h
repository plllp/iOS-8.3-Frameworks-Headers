//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface Exchange : NSObject
{
    NSString *_name;
    NSDate *_nextOpenDate;
    int _status;
    double _streamInterval;
    double _lastUpdateTime;
}

+ (id)formattedExchangeNameForName:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)marketIsAfterHours;
@property(retain, nonatomic) NSDate *nextOpenDate; // @synthesize nextOpenDate=_nextOpenDate;
@property(nonatomic) double streamInterval; // @synthesize streamInterval=_streamInterval;
- (void)_updateWithDictionary:(id)arg1 newUpdate:(BOOL)arg2;
- (BOOL)marketIsOpen;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)archiveDictionary;

@end
