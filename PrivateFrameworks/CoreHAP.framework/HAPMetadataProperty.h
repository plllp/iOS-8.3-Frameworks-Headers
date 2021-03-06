//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface HAPMetadataProperty : NSObject
{
    NSString *_propertyType;
    NSNumber *_bitPosition;
    NSString *_propertyDescription;
    NSString *_localizationKey;
}

+ (id)init:(id)arg1 withDictionary:(id)arg2;
@property(retain, nonatomic) NSNumber *bitPosition; // @synthesize bitPosition=_bitPosition;
@property(retain, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
- (id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 localizationKey:(id)arg4;
@property(retain, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
- (id)generateDictionary;
- (void).cxx_destruct;
- (id)description;
- (void)dump;
@property(retain, nonatomic) NSString *propertyDescription; // @synthesize propertyDescription=_propertyDescription;

@end

