//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient
{
    NSString *_calAttendeeName;
    id _participant;
}

- (id)displayString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) id participant;
- (void)setCalAttendeeName:(id)arg1;
- (id)initWithComposeRecipient:(id)arg1;

@end
