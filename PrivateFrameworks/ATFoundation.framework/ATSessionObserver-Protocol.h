//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATSession, ATSessionTask;

@protocol ATSessionObserver <NSObject>

@optional
- (void)sessionDidFinish:(ATSession *)arg1;
- (void)sessionWillBegin:(ATSession *)arg1;
- (void)session:(ATSession *)arg1 didFinishSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 didUpdateSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 didBeginSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 willBeginSessionTask:(ATSessionTask *)arg2;
@end

