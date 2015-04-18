//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ISUserNotification : NSObject
{
    int _allowedRetryCount;
    int _currentRetryCount;
    NSDictionary *_dictionary;
    unsigned long _optionFlags;
    NSDictionary *_userInfo;
}

@property(readonly) unsigned long optionFlags;
- (id)initWithDictionary:(id)arg1 options:(unsigned long)arg2;
@property int currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
- (struct __CFUserNotification *)copyUserNotification;
@property int allowedRetryCount; // @synthesize allowedRetryCount=_allowedRetryCount;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSDictionary *dictionary;
- (id)init;
- (void)dealloc;

@end
