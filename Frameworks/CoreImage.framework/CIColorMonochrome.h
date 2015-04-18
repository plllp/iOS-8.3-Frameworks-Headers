//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

@interface CIColorMonochrome : CIFilter
{
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputIntensity;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
- (id)_kernel;

@end
