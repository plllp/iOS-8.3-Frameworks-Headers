//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFUIDialogPhase, AFUISiriSession;

@protocol AFUISiriSessionLocalDelegate <NSObject>
- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFUIDialogPhase *)arg2;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void (^)(int))arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(void (^)(int))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(int)arg2;
@end

