//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKTravelAdvisor, EKTravelAgendaItem, NSString;

@interface EKTravelEngineAgendaEntry : NSObject
{
    BOOL _dismissed;
    NSString *_eventExternalURL;
    EKTravelAgendaItem *_agendaItem;
    EKTravelAdvisor *_advisor;
}

@property(nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
- (id)description;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) EKTravelAdvisor *advisor; // @synthesize advisor=_advisor;
@property(retain, nonatomic) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
@property(retain, nonatomic) EKTravelAgendaItem *agendaItem; // @synthesize agendaItem=_agendaItem;

@end
