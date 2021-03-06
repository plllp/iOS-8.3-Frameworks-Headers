//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUPhotosGridDownloadHelper, PUPhotosGridViewController;

@interface PUUIImagePickerControllerHelper : NSObject
{
    PUPhotosGridDownloadHelper *_downloadHelper;
    PUPhotosGridViewController *_gridViewController;
}

+ (id)imagePickerControllerForViewController:(id)arg1;
+ (int)albumFilterForMediaTypes:(id)arg1;
+ (id)albumListViewControllerSpec;
+ (id)gridViewControllerSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PUPhotosGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(BOOL)arg2;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2;
- (void)cancelCurrentAssetDownload;
- (void)updateSessionInfo;
- (id)initWithGridViewController:(id)arg1;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;

@end

