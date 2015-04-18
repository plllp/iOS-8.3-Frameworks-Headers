//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, VKPGlobalProperties, VKPStyleContents, VKStylesheet;

@interface VKCartoStyle : NSObject
{
    VKPStyleContents *_contents;
    unsigned int _stylesPopulated;
    struct StyleData *_roadData;
    struct StyleData *_polygonData;
    struct StyleData *_lineData;
    struct StyleData *_labelData;
    struct StyleData *_buildingData;
    struct StyleData *_genericShieldData;
    struct StyleData *_skyData;
    struct StyleData *_gridData;
    struct StyleData *_routeData;
    struct StyleData *_puckData;
    struct StyleData *_vegetationData;
    struct StyleData *_pinData;
    struct StyleData *_mapData;
    struct StyleData *_trafficData;
    struct StyleData *_transferConnectionData;
    VKCartoStyle *_variant;
    VKStylesheet *_stylesheet;
    unsigned int _mapStyleSupport;
    struct _opaque_pthread_mutex_t _lock;
    NSData *_contentsData;
    VKPGlobalProperties *_globalProperties;
    NSArray *_inheritance;
    NSString *_name;
    unsigned int *_inheritanceIndices;
    unsigned int _inheritanceIndexCount;
}

@property(retain, nonatomic) VKCartoStyle *variant; // @synthesize variant=_variant;
- (struct StyleData *)transferConnectionStyleData;
- (struct StyleData *)mapStyleData;
- (unsigned int *)inheritanceIndices;
- (id)globals;
- (id)inheritance;
- (id)contentsData;
- (void)_populateStyles:(unsigned int)arg1;
- (void)_setupPropertiesForStyleMask:(unsigned int)arg1;
- (void)applyStyle:(id)arg1 to:(id)arg2 inheritance:(id)arg3 zoom:(float)arg4;
@property(nonatomic) VKStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
- (Matrix_5173352a)basicRoadColor;
- (BOOL)isDrawStyleVisibleAtLOD:(unsigned int)arg1;
- (struct StyleData *)trafficStyleData;
- (struct StyleData *)puckStyleData;
- (struct StyleData *)pinStyleData;
- (struct StyleData *)vegetationStyleData;
- (struct StyleData *)routeStyleData;
- (struct StyleData *)gridStyleData;
- (struct StyleData *)skyStyleData;
- (struct StyleData *)genericShieldStyleData;
- (struct StyleData *)buildingStyleData;
- (struct StyleData *)labelStyleData;
- (struct StyleData *)polygonStyleData;
- (struct StyleData *)lineStyleData;
- (struct StyleData *)roadStyleData;
- (void)clearInheritance;
- (id)initWithStyle:(id)arg1 inheritance:(id)arg2 globals:(id)arg3 stylesheet:(id)arg4;
- (unsigned int)inheritsCount;
- (id).cxx_construct;
- (id)contents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (void)dealloc;

@end
