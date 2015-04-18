//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MCSessionPeerConnectionData : NSObject
{
    BOOL _hasIdentitySet;
    NSData *_gckSessionConnectionData;
    int _encryptionPreference;
}

+ (id)connectionDataSegmentWithEncryptionPreference:(int)arg1 identitySet:(BOOL)arg2 gckSessionConnectionDataBytes:(void *)arg3 gckSessionConnectionDataLength:(unsigned long)arg4;
- (void)dealloc;
@property(nonatomic) BOOL hasIdentitySet; // @synthesize hasIdentitySet=_hasIdentitySet;
@property(nonatomic) int encryptionPreference; // @synthesize encryptionPreference=_encryptionPreference;
@property(retain, nonatomic) NSData *gckSessionConnectionData; // @synthesize gckSessionConnectionData=_gckSessionConnectionData;
- (id)initWithConnectionDataBlob:(id)arg1;
- (void)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long)arg2;
- (BOOL)parseConnectionDataBlob:(id)arg1;

@end
