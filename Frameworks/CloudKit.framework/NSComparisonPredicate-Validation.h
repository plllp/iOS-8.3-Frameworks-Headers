//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSComparisonPredicate.h"

@interface NSComparisonPredicate (Validation)
- (unsigned int)_comparisonOptionForString:(id)arg1;
- (void)validate;
- (BOOL)validateBasicOperatorPredicate;
- (BOOL)validateBetweenPredicate;
- (BOOL)validateBeginsWithPredicate;
- (BOOL)validateContainsAllInPredicate;
- (BOOL)validateContainsAnyPredicate;
- (BOOL)validateInPredicate;
- (BOOL)validateContainsPredicate;
- (BOOL)validateNearPredicate;
- (BOOL)validateFullTextSearchPredicate;
@end
