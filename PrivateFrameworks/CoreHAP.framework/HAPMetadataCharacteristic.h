//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPMetadataCharacteristicValue, NSNumber, NSString;

@interface HAPMetadataCharacteristic : NSObject
{
    NSString *_name;
    NSString *_chrDescription;
    NSString *_localizationKey;
    NSString *_uuidStr;
    NSNumber *_properties;
    NSString *_format;
    NSString *_units;
    HAPMetadataCharacteristicValue *_valueMetadata;
}

@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) HAPMetadataCharacteristicValue *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSString *chrDescription; // @synthesize chrDescription=_chrDescription;
- (id)generateDictionary:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 localizationKey:(id)arg4 format:(id)arg5 properties:(id)arg6;
@property(retain, nonatomic) NSString *localizationKey; // @synthesize localizationKey=_localizationKey;
@property(retain, nonatomic) NSNumber *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)dump;

@end
