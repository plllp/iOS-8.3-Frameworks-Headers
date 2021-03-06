//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject
{
    LSBundleProxy *_bundleProxy;
}

+ (id)activityBundleHelperForExtension:(id)arg1;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(int)arg2;
- (float)preferredImageScale;
- (id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(int)arg3;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
- (id)initWithBundleProxy:(id)arg1;
- (id)localizedName;
- (id)debugDescription;
- (void)dealloc;

@end

