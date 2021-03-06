//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHImageManagerRequest.h>

@class PHImageRequestOptions;

@interface PHImageRequest : PHImageManagerRequest
{
    int _contentMode;
    PHImageRequestOptions *_options;
    int _bestFormat;
    int _degradedFormat;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

+ (id)imageRequestWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)descriptionWithContentMode:(int)arg1;
@property int bestFormat; // @synthesize bestFormat=_bestFormat;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHImageRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
- (id)description;
@property int degradedFormat; // @synthesize degradedFormat=_degradedFormat;
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (id)initImageRequestWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;

@end

