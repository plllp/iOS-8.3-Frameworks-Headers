//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADShapeProperties, OADTextBody, ODDPointPropertySet;

@interface ODDPoint : NSObject
{
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned int)arg2 array:(id *)arg3;
- (id)propertySet;
- (id)shapeProperties;
- (void)setText:(id)arg1;
- (id)text;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;

@end
