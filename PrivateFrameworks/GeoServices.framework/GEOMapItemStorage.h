//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOMapItemPrivate.h"
#import "NSCopying.h"

@class GEOAddress, GEOFeatureStyleAttributes, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, GEOPlaceResult, NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;

@interface GEOMapItemStorage : PBCodable <GEOMapItemPrivate, NSCopying>
{
    GEOMapItemClientAttributes *_clientAttributes;
    GEOPlace *_place;
    GEOPDPlace *_placeData;
    GEOPlaceResult *_placeResult;
}

+ (id)mapItemStorageForPlaceResult:(id)arg1;
+ (id)mapItemStorageForPlace:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForSerializedPlaceData:(id)arg1;
+ (id)mapItemStorageForSerializedMapItemStorage:(id)arg1;
+ (id)mapItemStorageToShareForGEOMapItem:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1 clientAttributes:(id)arg2;
+ (id)mapItemStorageForPlace:(id)arg1;
+ (id)mapItemStorageForGEOMapItemPrivate:(id)arg1;
+ (id)mapItemStorageForPlaceData:(id)arg1;
+ (id)mapItemStorageForGEOMapItem:(id)arg1;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) NSData *encodedData;
@property(retain, nonatomic) GEOMapItemClientAttributes *clientAttributes; // @synthesize clientAttributes=_clientAttributes;
@property(readonly, nonatomic) BOOL hasClientAttributes;
@property(readonly, nonatomic) BOOL hasPlaceData;
@property(retain, nonatomic) GEOPDPlace *placeData; // @synthesize placeData=_placeData;
@property(retain, nonatomic) GEOPlaceResult *placeResult; // @synthesize placeResult=_placeResult;
- (id)_geoMapItem;
- (id)initWithPlaceResult:(id)arg1;
- (id)initWithPlace:(id)arg1 clientAttributes:(id)arg2;
- (id)initWithPlaceData:(id)arg1 clientAttributes:(id)arg2;
@property(readonly, nonatomic) BOOL hasPlaceResult;
@property(readonly, nonatomic) BOOL isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) BOOL contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned int openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) BOOL hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_hasAreaInMeters) BOOL hasAreaInMeters;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncement;
@property(readonly, nonatomic, getter=_hasFlyoverAnnouncementMessage) BOOL hasFlyoverAnnouncement;
@property(readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_placeAsData) NSData *placeAsData;
- (id)_mapItemByStrippingOptionalData;
- (id)_asPlaceInfo;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property(readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) BOOL hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) BOOL goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) BOOL hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) BOOL hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) BOOL hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property(readonly, nonatomic) BOOL hasPlace;
@property(readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) NSString *timezone;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
