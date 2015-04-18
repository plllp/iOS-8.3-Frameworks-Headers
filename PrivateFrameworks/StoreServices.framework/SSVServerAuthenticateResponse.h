//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSNumber, NSString, NSURL;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding>
{
    NSNumber *_authenticatedAccountIdentifier;
    int _performedButtonIndex;
    NSURL *_redirectURL;
    int _selectedButtonIndex;
}

@property(nonatomic) int selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(nonatomic) int performedButtonIndex; // @synthesize performedButtonIndex=_performedButtonIndex;
@property(copy, nonatomic) NSNumber *authenticatedAccountIdentifier; // @synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
