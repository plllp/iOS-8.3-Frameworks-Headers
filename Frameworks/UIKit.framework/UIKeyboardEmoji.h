//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIKeyboardEmoji : NSObject
{
    NSString *_emojiString;
    unsigned int _variantMask;
}

+ (id)emojiWithString:(id)arg1 withVariantMask:(unsigned int)arg2;
@property unsigned int variantMask; // @synthesize variantMask=_variantMask;
- (id)initWithString:(id)arg1 withVariantMask:(unsigned int)arg2;
@property(retain, nonatomic) NSString *emojiString; // @synthesize emojiString=_emojiString;
- (id)key;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
