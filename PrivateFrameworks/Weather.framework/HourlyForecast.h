//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface HourlyForecast : NSObject <NSCopying>
{
    unsigned int _eventType;
    NSString *_time;
    int _hourIndex;
    NSString *_detail;
    int _conditionCode;
    float _percentPrecipitation;
}

+ (int)TimeValueFromString:(id)arg1;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) float percentPrecipitation; // @synthesize percentPrecipitation=_percentPrecipitation;
@property(nonatomic) int hourIndex; // @synthesize hourIndex=_hourIndex;
@property(nonatomic) int conditionCode; // @synthesize conditionCode=_conditionCode;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end
