//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPSManager;

@interface NTKCustomMonogramStore : NSObject
{
    NPSManager *_npsManager;
}

+ (id)sharedInstance;
- (void)_handlePrefsChanged;
- (void)setCustomMonogram:(id)arg1;
- (id)customMonogram;
- (void)_notifyClientsOfChange;
- (id)_customMonogramFromPrefs;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
