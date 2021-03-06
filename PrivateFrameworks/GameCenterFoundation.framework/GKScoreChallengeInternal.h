//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal
{
    GKScoreInternal *_score;
    GKLeaderboardInternal *_leaderboard;
}

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
- (unsigned int)type;
- (void)dealloc;

@end

