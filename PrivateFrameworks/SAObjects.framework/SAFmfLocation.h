//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SALocation.h>

@class NSNumber, NSString, SAPersonAttribute;

@interface SAFmfLocation : SALocation
{
}

+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)location;
@property(retain, nonatomic) SAPersonAttribute *friend;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(retain, nonatomic) NSNumber *distance;
@property(retain, nonatomic) NSNumber *locationDate;
@property(copy, nonatomic) NSString *emailAddress;
- (id)groupIdentifier;

@end
