//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSString;

@interface SKUILocalizedStringTable : NSObject
{
    NSBundle *_bundle;
    NSDictionary *_strings;
    NSString *_tableName;
}

- (id)_legacyLanguageNameForLanguageCode:(id)arg1;
- (id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;

@end

