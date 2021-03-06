//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPSearchQuery;

@interface SPDaemonQueryToken : NSObject
{
    struct __CFMachPort *_callbackPort;
    SPSearchQuery *_query;
    id <SPDaemonQueryDelegate> _delegate;
    unsigned int _queryID;
}

- (id)initWithQuery:(id)arg1;
@property(readonly, nonatomic) unsigned int queryID; // @synthesize queryID=_queryID;
@property(readonly, nonatomic) SPSearchQuery *query; // @synthesize query=_query;
@property(nonatomic) id <SPDaemonQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)handleMessage:(id)arg1;

@end

