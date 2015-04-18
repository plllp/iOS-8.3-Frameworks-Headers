//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface YahooDoppelganger : NSObject
{
    NSString *_expectedRequestPattern;
    NSData *_response;
    unsigned int _responseChunkSize;
    unsigned int _responseChunkDelay;
    unsigned int _responseChunkInitialDelay;
    unsigned int _responseOffset;
    BOOL _cancelled;
    id <NSURLConnectionDelegate> _delegate;
}

+ (BOOL)waitForAllDoppelgangersUpToTimeout:(double)arg1;
+ (void)clearDoppelgangerData;
+ (void)spewDoppelgangerData;
+ (id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(int)arg2;
+ (id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(int)arg2;
+ (id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(BOOL)arg2;
+ (id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2;
+ (void)setTestHarness:(id)arg1;
+ (void)_doppelgangerFinished:(id)arg1;
+ (void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2;
+ (id)newDoppelgangerMatchingRequestPattern:(id)arg1;
+ (void)hookIntoYQLRequestIfNeeded;
+ (BOOL)canHandleRequest:(id)arg1;
@property(nonatomic) unsigned int responseChunkInitialDelay; // @synthesize responseChunkInitialDelay=_responseChunkInitialDelay;
@property(nonatomic) unsigned int responseChunkDelay; // @synthesize responseChunkDelay=_responseChunkDelay;
@property(nonatomic) unsigned int responseChunkSize; // @synthesize responseChunkSize=_responseChunkSize;
@property(retain, nonatomic) NSString *expectedRequestPattern; // @synthesize expectedRequestPattern=_expectedRequestPattern;
- (void)_relayDataChunk;
- (BOOL)matchesRequest:(id)arg1;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
@property(retain, nonatomic) NSData *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)start;
@property(nonatomic) __weak id <NSURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (id)init;
- (void)cancel;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end
