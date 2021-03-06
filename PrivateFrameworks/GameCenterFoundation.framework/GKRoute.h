//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject
{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (BOOL)matchesURL:(id)arg1;
- (BOOL)matchesURL:(id)arg1 parameters:(id *)arg2;
- (id)nonParameterCharacterSet;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)initWithString:(id)arg1;
- (void)dealloc;

@end

