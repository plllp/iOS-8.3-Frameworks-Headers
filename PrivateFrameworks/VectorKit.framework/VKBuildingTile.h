//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

@class NSMutableArray, VK3DObjectSubTile, VKAnimation;

@interface VKBuildingTile : VKVectorTile
{
    vector_dc840c5c _facadeTextures;
    NSMutableArray *_polygonGroups[3];
    VK3DObjectSubTile *_objectSubTile;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D>> _shadowTexture;
    Matrix_08d701e4 _shadowModelMatrix;
    shared_ptr_1fee3c91 _shadowViewUniformData;
    float _alpha;
    float _scale;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    double _maxHeight;
    struct CullingGridWithHeight _cullingGrid;
    struct FogInfo _fogInfo;
    VKAnimation *_animation;
    VKAnimation *_animationForPitch;
}

- (void)_blurTexture:(char *)arg1;
- (void)_fillShadowAreasInContext:(struct CGContext *)arg1 data:(char *)arg2;
- (Box_3fb92e00)_shadowBounds;
- (void)_buildShadowTexture;
- (void)buildMeshesWithTriangulator:(id)arg1 device:(struct Device *)arg2 prepareExtrusion:(BOOL)arg3;
@property(readonly, nonatomic) VK3DObjectSubTile *objectSubTile; // @synthesize objectSubTile=_objectSubTile;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(float)arg6 device:(struct Device *)arg7;
@property(retain, nonatomic) VKAnimation *animationForPitch; // @synthesize animationForPitch=_animationForPitch;
@property(readonly, nonatomic) struct Texture2D *shadowTexture;
@property(readonly, nonatomic) shared_ptr_1fee3c91 shadowViewUniformData;
- (const vector_dc840c5c *)facadeTextures;
@property(readonly, nonatomic) struct CullingGridWithHeight cullingGrid; // @synthesize cullingGrid=_cullingGrid;
@property(readonly, nonatomic) struct FogInfo *fogInfo;
- (id)polygonGroupsForTextureAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfFacadeTextures;
@property(readonly, nonatomic) float maxLayeringHeight; // @synthesize maxLayeringHeight=_maxLayeringHeight;
@property(readonly, nonatomic) float minLayeringHeight; // @synthesize minLayeringHeight=_minLayeringHeight;
- (BOOL)heightAtPoint:(const Matrix_8746f91e *)arg1 outZ:(float *)arg2;
- (void)updateWithStyleResolutionSession:(StyleResolutionSession_7ac5772b *)arg1;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
@property(readonly, nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) VKAnimation *animation; // @synthesize animation=_animation;
- (id).cxx_construct;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
- (void)dealloc;

@end
