//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"
#import "SPDaemonQueryDelegate.h"

@class NSArray, NSMutableArray, NSObject<SPSearchAgentDelegate>, NSString, SPDaemonQueryToken, SPSearchResultSection;

@interface SPSearchAgent : NSObject <SPDaemonQueryDelegate, MCProfileConnectionObserver>
{
    SPDaemonQueryToken *_currentToken;
    NSString *_prefixWithNoResults;
    NSMutableArray *_sections;
    NSArray *_searchDomains;
    unsigned int _resultCount;
    int _options;
    SPSearchResultSection *_topHitResultSection;
    SPSearchResultSection *_searchThroughSection;
    BOOL _searchThroughAllowed;
    BOOL _observersAdded;
    BOOL _queryComplete;
    NSObject<SPSearchAgentDelegate> *_delegate;
}

- (void)internetDomainsChanged;
- (void)retrieveImageDataForIdentifier:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveImageDataForResult:(id)arg1 inSection:(id)arg2 preferredSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeSectionAtIndex:(unsigned int)arg1;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
- (void)stuffChanged;
- (void)addSearchThroughSectionWithQuery:(id)arg1;
- (BOOL)hasResults;
- (void)addDeserializer:(id)arg1;
- (BOOL)cleanupObsoleteResults;
- (void)updateSearchThroughWithString:(id)arg1;
- (BOOL)_shouldIgnoreQuery:(id)arg1;
- (id)_indexesOfCompatibleSection:(id)arg1;
- (void)handleOptionsForNewSections:(id)arg1;
- (id)initWithOptions:(int)arg1;
- (void)addSections:(id)arg1;
- (unsigned int)sectionCount;
- (id)sectionAtIndex:(unsigned int)arg1;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (void)searchDaemonQueryReset:(id)arg1;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (id)queryString;
- (BOOL)setQueryString:(id)arg1;
@property(nonatomic) int options; // @synthesize options=_options;
- (void)clear;
- (void)activate;
- (void)deactivate;
- (void)invalidate;
@property(nonatomic) NSObject<SPSearchAgentDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic) unsigned int resultCount; // @synthesize resultCount=_resultCount;
@property(readonly, nonatomic) BOOL queryComplete; // @synthesize queryComplete=_queryComplete;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

