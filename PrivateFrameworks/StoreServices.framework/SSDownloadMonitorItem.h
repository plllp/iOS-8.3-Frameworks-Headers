//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>
{
    NSString *_clientIdentifier;
    int _itemState;
    NSString *_representativeTitle;
    NSString *_statusString;
    int _totalNumberOfItems;
    unsigned int _transferTypes;
}

@property(nonatomic) unsigned int transferTypes; // @synthesize transferTypes=_transferTypes;
@property(nonatomic) int totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(copy, nonatomic) NSString *representativeTitle; // @synthesize representativeTitle=_representativeTitle;
@property(nonatomic) int itemState; // @synthesize itemState=_itemState;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

