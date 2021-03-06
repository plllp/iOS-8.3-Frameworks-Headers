//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKInviteInternal, GKPlayer, NSData, NSString;

@interface GKInvite : NSObject
{
    BOOL _cancelled;
    GKInviteInternal *_internal;
    GKPlayer *_sender;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(readonly, retain, nonatomic) NSString *inviter; // @dynamic inviter;
@property(readonly, nonatomic, getter=isHosted) BOOL hosted; // @dynamic hosted;
@property(retain) GKInviteInternal *internal; // @synthesize internal=_internal;
- (id)initWithInternalRepresentation:(id)arg1;
@property(readonly, retain, nonatomic) GKPlayer *sender; // @synthesize sender=_sender;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) NSString *inviteID; // @dynamic inviteID;
@property(readonly, nonatomic) BOOL isNearby; // @dynamic isNearby;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) unsigned int playerAttributes; // @dynamic playerAttributes;
@property(readonly, nonatomic) unsigned int playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) NSData *sessionToken; // @dynamic sessionToken;

@end

