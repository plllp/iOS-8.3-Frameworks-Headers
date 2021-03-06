//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSAccountStore.h>

@class NSArray;

@interface SSClientAccountStore : SSAccountStore
{
    NSArray *_accounts;
    BOOL _accountsValid;
}

@property(copy) NSArray *accounts; // @dynamic accounts;
- (id)setActiveLockerAccount:(id)arg1;
- (id)setActiveAccount:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (void)signOutAllAccounts;
- (id)_copyReloadedAccounts;
- (void)_signOutWithAccountIDs:(id)arg1;
- (void)updateAccountsWithMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_invalidateAccounts;
- (id)_accountWithUniqueIdentifier:(id)arg1;
- (id)_addAccount:(id)arg1 asActiveAccount:(BOOL)arg2 activeLockerAccount:(BOOL)arg3;
- (void)_reloadAccountsIfNeeded;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2;
- (void)signOutAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (void)reloadAccounts;
- (id)init;
- (void)dealloc;
- (id)activeLockerAccount;
- (id)activeAccount;

@end

