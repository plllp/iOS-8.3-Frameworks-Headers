//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FigCameraViewfinderSession, NSData;

@protocol FigCameraViewfinderSessionDelegate <NSObject>

@optional
- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 previewStreamDidCloseWithStatus:(long)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(FigCameraViewfinderSession *)arg1;
- (void)cameraViewfinderSession:(FigCameraViewfinderSession *)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(NSData *)arg3 timestamp:(CDStruct_1b6d18a9)arg4;
@end

