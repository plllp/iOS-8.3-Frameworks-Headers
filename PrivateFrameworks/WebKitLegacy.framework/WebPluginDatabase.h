//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (void)closeSharedDatabase;
+ (id)_defaultPlugInPaths;
+ (id)sharedDatabaseIfExists;
+ (id)sharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
- (id)_plugInPaths;
- (void)destroyAllPluginInstanceViews;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (void)_addPlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)_removePlugin:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (void)setPlugInPaths:(id)arg1;
- (id)plugins;
- (void)close;
- (id)init;
- (void)dealloc;
- (void)refresh;

@end
