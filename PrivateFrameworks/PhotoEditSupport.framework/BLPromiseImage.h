//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoEditSupport/BLImage.h>

@class BLAdjustmentModel, BLCropModel, BLImagePatchList, BLPhotoEffectsModel, BLPixelImageBuffer, BLRepairModel, BLRetouchModel, NSDictionary, NSLock;

@interface BLPromiseImage : BLImage
{
    struct CGImage *_sourceCGImage;
    BLImagePatchList *_imagePatchList;
    BLImagePatchList *_repairImagePatchList;
    BLPixelImageBuffer *_flattenedImageBuffer;
    int _backOrientation;
    int _initialOrientation;
    int _actualOrientation;
    struct CGSize _sourceSize;
    BLCropModel *_userCropModel;
    BLCropModel *_cropModel;
    BLAdjustmentModel *_adjustmentModel;
    BLPhotoEffectsModel *_photoEffectsModel;
    BLRetouchModel *_retouchModel;
    BLRepairModel *_repairModel;
    NSLock *_drawLock;
    NSDictionary *_adjustments;
    NSDictionary *_analysis;
}

+ (id)imageWithImage:(id)arg1;
+ (struct CGSize)maximumSizeForFlattening;
+ (void)convertXMP:(id)arg1 toAdjustments:(id)arg2 andAnalysis:(id)arg3 size:(struct CGSize)arg4 image:(id)arg5 needsHistogram:(char *)arg6;
- (BOOL)hasRotation;
- (BOOL)hasCrop;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(int)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4 andOptionFlags:(int)arg5;
@property(readonly, nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
- (id)flattenedPixelImageBufferInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(BOOL)arg2;
- (id)flattenedImageFromRect:(struct CGRect)arg1 forSize:(struct CGSize)arg2;
- (id)repairLayerStack;
- (void)setRepairLayerStack:(id)arg1;
- (id)retouchLayerStack;
- (void)setRetouchLayerStack:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 flattenedImageBuffer:(id)arg2 orientation:(int)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithImagePatchList:(id)arg1 backOrientation:(int)arg2 orientation:(int)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithPromiseImage:(id)arg1 userCrop:(struct CGRect)arg2 andOptionFlags:(int)arg3;
- (id)initWithPromiseImage:(id)arg1 andOptionFlags:(int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 backOrientation:(int)arg2 orientation:(int)arg3 adjustmentData:(id)arg4 andAnalysisData:(id)arg5 andOptionFlags:(int)arg6;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(int)arg2 adjustmentData:(id)arg3 andAnalysisData:(id)arg4;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(BOOL)arg2;
- (id)flattenedImageInBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (BOOL)_flattenInContext:(struct CGContext *)arg1 targetSize:(struct CGSize)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)prepareForDrawing;
- (struct CGSize)_targetSizeForBoundingSize:(struct CGSize)arg1 shouldScaleForScreen:(BOOL)arg2;
- (BOOL)hasEdits;
- (void)_drawImagePatchListInContext:(struct CGContext *)arg1 imagePatchList:(id)arg2 size:(struct CGSize)arg3 drawScaleX:(float)arg4 drawScaleY:(float)arg5 totalPadding:(float)arg6;
- (void)drawInContext:(struct CGContext *)arg1 forRect:(struct CGRect)arg2 andSize:(struct CGSize)arg3;
- (BOOL)hasRepair;
- (BOOL)hasFastDownstreamEffects;
- (BOOL)hasEdgeEffects;
- (BOOL)hasInkEffects;
- (BOOL)hasRepairOrRedeye;
- (BOOL)hasRetouch;
- (BOOL)hasPhotoEffects;
- (BOOL)hasColor;
- (BOOL)hasExposure;
- (BOOL)hasRedeye;
- (id)initWithCGImage:(struct CGImage *)arg1 orImagePatchList:(id)arg2 flattenedImageBuffer:(id)arg3 backOrientation:(int)arg4 orientation:(int)arg5 userCrop:(struct CGRect)arg6 adjustmentData:(id)arg7 andAnalysisData:(id)arg8 andOptionFlags:(int)arg9;
- (id)UIImage;
- (id)CIImage;
- (struct CGImage *)CGImage;
- (void)dealloc;
- (struct CGSize)maximumSize;

@end

