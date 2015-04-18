//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StockDataSource : NSObject
{
    int _identifier;
    NSString *_name;
    NSString *_sourceDescription;
}

@property(readonly, nonatomic) NSString *localizedSourceDescription;
@property(copy, nonatomic) NSString *sourceDescription; // @synthesize sourceDescription=_sourceDescription;
- (void).cxx_destruct;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (id)archiveDictionary;

@end
