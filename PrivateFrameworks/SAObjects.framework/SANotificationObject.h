//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString;

@interface SANotificationObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSString *applicationId;
@property(copy, nonatomic) NSString *timeZoneId;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(copy, nonatomic) NSNumber *dateIsAllDay;
@property(copy, nonatomic) NSDate *recencyDate;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *type;
- (id)groupIdentifier;

@end

