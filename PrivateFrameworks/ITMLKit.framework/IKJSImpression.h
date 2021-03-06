//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSImpression.h"

@class NSArray, NSMutableArray, NSString;

@interface IKJSImpression : IKJSObject <IKJSImpression>
{
    id <IKJSImpression> _parentImpression;
    NSString *_metricsData;
    NSMutableArray *_mutableTimestamps;
    NSMutableArray *_mutableChildren;
    long _indexInParent;
}

@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) id parent;
- (void)addChild:(id)arg1;
@property(nonatomic) long indexInParent; // @synthesize indexInParent=_indexInParent;
@property(copy, nonatomic) NSString *metricsData; // @synthesize metricsData=_metricsData;
@property(readonly, nonatomic) NSArray *timestamps;
@property(nonatomic) __weak id <IKJSImpression> parentImpression; // @synthesize parentImpression=_parentImpression;
@property(retain, nonatomic) NSMutableArray *mutableChildren; // @synthesize mutableChildren=_mutableChildren;
@property(retain, nonatomic) NSMutableArray *mutableTimestamps; // @synthesize mutableTimestamps=_mutableTimestamps;
- (void)addTimestamp:(long long)arg1;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned int)arg3;
- (void)linkReferences;
- (void).cxx_destruct;
@property(readonly, nonatomic) long index;
@property(readonly, nonatomic) NSString *data;
- (id)description;

@end

