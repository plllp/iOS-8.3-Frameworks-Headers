//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import "SSPurchaseRequestDelegate.h"

@class NSString, SSPurchaseRequest;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>
{
}

+ (id)instanceWithPurchases:(id)arg1;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, retain, nonatomic) SSPurchaseRequest *request; // @dynamic request;
@property(readonly) Class superclass;

@end

