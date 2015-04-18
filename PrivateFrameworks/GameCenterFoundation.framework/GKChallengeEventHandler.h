//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject
{
    id <GKChallengeEventHandlerDelegate> _delegateWeak;
    id <GKChallengeEventHandlerUIDelegate> _uiDelegate;
    GKChallengeInternal *_pendingReceivedChallenge;
    GKChallengeInternal *_pendingCompletedChallenge;
}

+ (id)challengeEventHandler;
@property(retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge; // @synthesize pendingCompletedChallenge=_pendingCompletedChallenge;
@property(retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge; // @synthesize pendingReceivedChallenge=_pendingReceivedChallenge;
- (void)showBannerForChallenge:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)receivedChallengeSelected:(id)arg1;
@property(retain, nonatomic) id <GKChallengeEventHandlerUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) id <GKChallengeEventHandlerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

@end
