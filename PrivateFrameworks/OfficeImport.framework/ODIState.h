//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

@interface ODIState : NSObject
{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    float mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (int)pointCount;
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(BOOL)arg2;
- (int)pointIndex;
- (void)setPointIndex:(int)arg1;
- (void)setPointCount:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (id)presentationNameForPointType:(int)arg1;
- (id)diagramOrientedBounds;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (id)drawingTheme;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (id)diagram;
- (struct CGRect)logicalBounds;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (id)group;
- (void)setGroup:(id)arg1;
- (id).cxx_construct;
- (float)scale;
- (void)dealloc;

@end
