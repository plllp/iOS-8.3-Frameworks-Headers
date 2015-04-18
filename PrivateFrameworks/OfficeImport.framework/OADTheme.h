//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject
{
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
}

@property(retain, nonatomic) OADDefaultProperties *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(retain, nonatomic) OADDefaultProperties *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(retain, nonatomic) OADDefaultProperties *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
@property(retain, nonatomic) OADBaseStyles *baseStyles; // @synthesize baseStyles=mBaseStyles;
- (void)addDefaults;
- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)init;
- (void)dealloc;

@end
