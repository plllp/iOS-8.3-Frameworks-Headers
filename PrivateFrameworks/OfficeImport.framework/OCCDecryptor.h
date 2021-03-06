//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OCCDecryptor : NSObject
{
    NSString *mOutputFilename;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer *mStreamer;
}

+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)agileDescriptorNamespace;
+ (id)allocTempFileWithBase:(id)arg1 outFilename:(id *)arg2;
@property(readonly, nonatomic) NSString *outputFilename; // @synthesize outputFilename=mOutputFilename;
- (id)initWithStreamer:(struct OCCStreamer *)arg1;
- (BOOL)decrypt;
- (BOOL)decryptIntoOutputFile;
- (void)deleteOutputFile;
- (BOOL)verifyPassphrase:(id)arg1;
- (BOOL)isReadProtectedUsingDefaultPassphrase;
- (void)dealloc;

@end

