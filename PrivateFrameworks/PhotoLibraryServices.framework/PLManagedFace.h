//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLManagedAsset;

@interface PLManagedFace : PLManagedObject
{
}

+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
@property(nonatomic) struct CGRect relativeRect;
- (void)delete;
@property(nonatomic) short identifier;

// Remaining properties
@property(retain, nonatomic) NSString *albumUUID; // @dynamic albumUUID;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;

@end
