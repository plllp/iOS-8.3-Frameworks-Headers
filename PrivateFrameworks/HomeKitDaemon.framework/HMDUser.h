//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HMDHome, NSData, NSString, NSUUID;

@interface HMDUser : NSObject <NSSecureCoding>
{
    BOOL _remoteGateway;
    NSString *_userID;
    NSUUID *_uuid;
    NSString *_pairingUsername;
    NSData *_publicKey;
    unsigned int _privilege;
    HMDHome *_home;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRemoteGateway) BOOL remoteGateway; // @synthesize remoteGateway=_remoteGateway;
- (id)lookupDisplayName;
- (id)initWithName:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 privilege:(unsigned int)arg4 remoteGateway:(BOOL)arg5 home:(id)arg6;
@property(readonly, nonatomic) unsigned int privilege; // @synthesize privilege=_privilege;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *pairingUsername; // @synthesize pairingUsername=_pairingUsername;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

