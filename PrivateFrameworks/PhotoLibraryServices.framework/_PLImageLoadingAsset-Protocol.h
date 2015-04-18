//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSString, NSURL, PLManagedAsset, PLPhotoLibrary;

@protocol _PLImageLoadingAsset <NSObject>
- (BOOL)isTimelapsePlaceholder;
- (PLManagedAsset *)managedAssetForPhotoLibrary:(PLPhotoLibrary *)arg1;
- (BOOL)duration;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudPhotoLibraryAsset;
- (int)cloudSharedAssetPlaceholderKind;
- (BOOL)isCloudSharedAsset;
- (BOOL)isInFlight;
- (NSURL *)fileURLForFullsizeRenderImage;
- (NSURL *)fileURLForFullsizeRenderVideo;
- (NSString *)pathForAdjustmentDataFile;
- (NSString *)pathForAdjustmentFile;
- (NSString *)pathForPenultimateFullsizeRenderImageFile;
- (NSString *)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int *)arg3;
- (NSString *)pathForSubstandardFullsizeRenderImageFile;
- (NSString *)pathForOriginalFile;
- (int)orientation;
- (BOOL)isPartOfBurst;
- (BOOL)isRAW;
- (BOOL)isJPEG;
- (BOOL)isVideo;
- (NSString *)uniformTypeIdentifier;
- (NSManagedObjectID *)objectID;
- (struct CGSize)imageSize;
- (NSString *)thumbnailIdentifier;
- (BOOL)complete;
- (short)kindSubtype;
- (short)kind;
- (short)savedAssetType;
- (NSString *)uuid;
- (unsigned int)effectiveThumbnailIndex;
- (NSString *)debugFilename;
- (BOOL)hasAdjustments;
- (BOOL)hasLegacyAdjustments;
- (int)originalImageOrientation;
- (NSURL *)assetsLibraryURL;
- (double)aspectRatio;
- (PLPhotoLibrary *)pl_photoLibrary;
@end
