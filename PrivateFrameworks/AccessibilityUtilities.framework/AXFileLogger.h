//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXFileLogger : NSObject
{
    NSString *_filePath;
}

+ (id)defaultFileLogger;
- (id)initWithFilePath:(id)arg1;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;
- (void)log:(id)arg1;

@end
