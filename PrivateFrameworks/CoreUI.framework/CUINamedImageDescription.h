//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUINamedImageDescription : NSObject
{
    float _scale;
    int _idiom;
    int _subtype;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    int _blendMode;
    int _templateRenderingMode;
    int _imageType;
    CDStruct_fd71c141 _edgeInsets;
    CDStruct_fd71c141 _alignmentEdgeInsets;
    int _resizingMode;
    int _exifOrientation;
}

@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
@property(nonatomic) BOOL isTemplate;
@property(nonatomic) int sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) int sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) int resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) CDStruct_fd71c141 alignmentEdgeInsets; // @synthesize alignmentEdgeInsets=_alignmentEdgeInsets;
@property(nonatomic) int templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) CDStruct_fd71c141 edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
- (id)description;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;

@end
