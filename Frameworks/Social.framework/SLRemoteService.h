//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Social/SLService.h>

#import "NSSecureCoding.h"

@class NSBundle, NSSet, NSString, NSURL, UIImage;

@interface SLRemoteService : SLService <NSSecureCoding>
{
    int _maximumVideoCount;
    UIImage *_activityImage;
    NSBundle *_serviceBundle;
    BOOL _serviceRegionTargetIsChina;
    BOOL _addDeviceClassToRequest;
    NSString *_serviceTypeIdentifier;
    NSString *_accountTypeIdentifier;
    NSString *_localizedServiceName;
    NSString *_activityViewIconResourceName;
    int _authenticationStyle;
    int _maximumURLCount;
    int _maximumImageCount;
    int _maximumImageDataSize;
    int _maximumVideoDataSize;
    int _maximumVideoTimeLimit;
    NSSet *_supportedImageAssetURLSchemes;
    NSSet *_supportedVideoAssetURLSchemes;
    NSString *_activityImageName;
    NSURL *_serviceBundleURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)_cachedServiceWithType:(id)arg1;
+ (id)_cachedServices;
+ (id)remoteServices;
+ (id)remoteServiceForTypeIdentifier:(id)arg1;
@property(retain) NSString *accountTypeIdentifier; // @synthesize accountTypeIdentifier=_accountTypeIdentifier;
- (id)serviceType;
- (id)activityImage;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property int maximumVideoTimeLimit; // @synthesize maximumVideoTimeLimit=_maximumVideoTimeLimit;
@property int maximumVideoDataSize; // @synthesize maximumVideoDataSize=_maximumVideoDataSize;
@property int maximumImageDataSize; // @synthesize maximumImageDataSize=_maximumImageDataSize;
@property int maximumImageCount; // @synthesize maximumImageCount=_maximumImageCount;
@property int maximumURLCount; // @synthesize maximumURLCount=_maximumURLCount;
@property(retain) NSString *activityViewIconResourceName; // @synthesize activityViewIconResourceName=_activityViewIconResourceName;
@property(nonatomic) int maximumVideoCount; // @dynamic maximumVideoCount;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;
@property(retain) NSString *localizedServiceName; // @synthesize localizedServiceName=_localizedServiceName;
- (id)_activityImageForImageResourceName:(id)arg1 inBundle:(id)arg2;
@property(retain) NSString *activityImageName; // @synthesize activityImageName=_activityImageName;
- (BOOL)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (id)_encodableStringProperties;
@property(retain) NSSet *supportedVideoAssetURLSchemes; // @synthesize supportedVideoAssetURLSchemes=_supportedVideoAssetURLSchemes;
@property(retain) NSSet *supportedImageAssetURLSchemes; // @synthesize supportedImageAssetURLSchemes=_supportedImageAssetURLSchemes;
@property BOOL addDeviceClassToRequest; // @synthesize addDeviceClassToRequest=_addDeviceClassToRequest;
@property BOOL serviceRegionTargetIsChina; // @synthesize serviceRegionTargetIsChina=_serviceRegionTargetIsChina;
@property(retain) NSURL *serviceBundleURL; // @synthesize serviceBundleURL=_serviceBundleURL;
@property(retain) NSString *serviceTypeIdentifier; // @synthesize serviceTypeIdentifier=_serviceTypeIdentifier;
- (id)_authenticationStyleIdentifierMappings;
- (BOOL)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_requiredInfoDictKeys;
- (id)integerPropertyKeyMappings;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
@property int authenticationStyle; // @synthesize authenticationStyle=_authenticationStyle;
- (int)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (BOOL)infoDictHasRequiredKeys:(id)arg1;
@property(readonly) NSBundle *serviceBundle;
- (id)composeViewController;
- (BOOL)supportsVideoURL:(id)arg1;
- (BOOL)supportsImageURL:(id)arg1;
- (BOOL)isFirstClassService;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;

@end
