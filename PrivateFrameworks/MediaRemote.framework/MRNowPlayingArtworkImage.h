//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)copyImageData;
- (void)bindToXPCDictionary:(id)arg1;
- (BOOL)hasArtworkData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (unsigned int)type;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

