//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding>
{
    NSString *_pushTopic;
    NSString *_lastUpdatedTag;
    NSArray *_certificates;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
    NSURL *_trustedServiceManagerURL;
    NSString *_trustedServiceManagerPushTopic;
    int _consistencyCheckBackoffLevel;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(retain, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(retain, nonatomic) NSString *pushTopic; // @synthesize pushTopic=_pushTopic;
@property(retain, nonatomic) NSString *trustedServiceManagerPushTopic; // @synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic;
@property(retain, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(nonatomic) int consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
