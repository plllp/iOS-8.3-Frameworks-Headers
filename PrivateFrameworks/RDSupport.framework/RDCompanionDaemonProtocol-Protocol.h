//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol RDCompanionDaemonProtocol <NSObject>
- (void)resetIDSPairingRecords;
- (void)changeGizmoLanguage:(NSString *)arg1 locale:(NSString *)arg2;
- (void)setupIDSLocalConnectionWithInterfaceName:(NSString *)arg1 ipAddress:(NSString *)arg2 forceKill:(BOOL)arg3;
@end

