//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"

@class NSArray, NSDictionary, NSString, SCNGeometry, SCNOrderedDictionary, UIColor;

@interface SCNParticleSystem : NSObject <NSCopying, NSSecureCoding, SCNAnimatable>
{
    id _reserved;
    struct __C3DParticleSystem *_particleSystem;
    unsigned int _isPresentationInstance:1;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    float _emissionDuration;
    float _emissionDurationVariation;
    float _idleDuration;
    float _idleDurationVariation;
    float _birthRate;
    float _birthRateVariation;
    float _warmupDuration;
    SCNGeometry *_emitterShape;
    int _birthLocation;
    int _birthDirection;
    struct SCNVector3 _emittingDirection;
    struct SCNVector3 _acceleration;
    float _spreadingAngle;
    BOOL _loops;
    BOOL _isLocal;
    BOOL _affectedByGravity;
    BOOL _affectedByPhysicsFields;
    BOOL _physicsCollisionsEnabled;
    BOOL _lightingEnabled;
    BOOL _softParticlesEnabled;
    BOOL _particleDiesOnCollision;
    BOOL _blackPassEnabled;
    float _particleAngle;
    float _particleAngleVariation;
    float _particleVelocity;
    float _particleVelocityVariation;
    float _particleAngularVelocity;
    float _particleAngularVelocityVariation;
    float _particleLifeSpan;
    float _particleLifeSpanVariation;
    float _particleBounce;
    float _particleBounceVariation;
    float _particleFriction;
    float _particleFrictionVariation;
    float _particleCharge;
    float _particleChargeVariation;
    id _particleImage;
    UIColor *_particleColor;
    struct SCNVector4 _particleColorVariation;
    SCNParticleSystem *_systemSpawnedOnCollision;
    SCNParticleSystem *_systemSpawnedOnDying;
    SCNParticleSystem *_systemSpawnedOnLiving;
    float _particleSize;
    float _particleSizeVariation;
    int _seed;
    int _blendMode;
    int _renderingMode;
    int _orientationMode;
    int _imageSequenceAnimationMode;
    NSArray *_particleGeometries;
    NSArray *_colliderNodes;
    NSDictionary *_propertyControllers;
    int _sortingMode;
    float _particleMass;
    float _particleMassVariation;
    float _dampingFactor;
    float _speedFactor;
    float _fixedTimeStep;
    float _stretchFactor;
    float _fresnelExponent;
    unsigned int _imageSequenceColumnCount;
    unsigned int _imageSequenceRowCount;
    float _imageSequenceInitialFrame;
    float _imageSequenceInitialFrameVariation;
    float _imageSequenceFrameRate;
    float _imageSequenceFrameRateVariation;
}

+ (BOOL)supportsSecureCoding;
+ (id)particleSystemWithParticleSystemRef:(struct __C3DParticleSystem *)arg1;
+ (id)particleSystemNamed:(id)arg1 inDirectory:(id)arg2;
+ (id)particleSystem;
+ (id)SCNJSExportProtocol;
@property(nonatomic) struct SCNVector3 acceleration;
@property(nonatomic) BOOL affectedByGravity;
- (int)seed;
- (void)removeAllAnimations;
- (void)setIdentifier:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (int)renderingMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addAnimation:(id)arg1;
- (void)reset;
- (id)identifier;
- (id)name;
- (void)setName:(id)arg1;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (short)typeOfProperty:(id)arg1;
- (void)setConstraintRef:(struct __C3DParticleSystem *)arg1;
- (void)_customDecodingOfSCNParticleSystem:(id)arg1;
- (void)_customEncodingOfSCNParticleSystem:(id)arg1;
@property(nonatomic, getter=isLocal) BOOL local;
- (void)removeAllModifiers;
- (void)removeModifiersOfStage:(int)arg1;
- (void)addModifierForProperties:(id)arg1 atStage:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)handleEvent:(int)arg1 forProperties:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)blackPassEnabled;
- (BOOL)lightingEnabled;
- (BOOL)softParticlesEnabled;
- (id)initPresentationSystemWithSystemRef:(struct __C3DParticleSystem *)arg1;
- (id)initWithParticleSystemRef:(struct __C3DParticleSystem *)arg1;
@property(nonatomic) float imageSequenceFrameRateVariation;
@property(nonatomic) float imageSequenceFrameRate;
@property(nonatomic) float imageSequenceInitialFrameVariation;
@property(nonatomic) float imageSequenceInitialFrame;
@property(nonatomic) unsigned int imageSequenceColumnCount;
@property(nonatomic) unsigned int imageSequenceRowCount;
@property(nonatomic) float stretchFactor;
- (void)setFixedTimeStep:(float)arg1;
- (float)fixedTimeStep;
@property(nonatomic) float speedFactor;
@property(nonatomic) float dampingFactor;
@property(nonatomic) float particleMassVariation;
@property(nonatomic) float particleMass;
@property(nonatomic) int sortingMode;
@property(copy, nonatomic) NSDictionary *propertyControllers;
@property(copy, nonatomic) NSArray *colliderNodes;
- (void)setParticleGeometries:(id)arg1;
- (id)particleGeometries;
@property(nonatomic) int imageSequenceAnimationMode;
@property(nonatomic) int orientationMode;
- (void)setRenderingMode:(int)arg1;
@property(nonatomic) int blendMode;
- (void)setSeed:(int)arg1;
@property(nonatomic) float particleSizeVariation;
@property(nonatomic) float particleSize;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property(retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property(nonatomic) struct SCNVector4 particleColorVariation;
@property(retain, nonatomic) UIColor *particleColor;
@property(nonatomic) float particleChargeVariation;
@property(nonatomic) float particleCharge;
@property(nonatomic) float particleFrictionVariation;
@property(nonatomic) float particleFriction;
@property(nonatomic) float particleBounceVariation;
@property(nonatomic) float particleBounce;
@property(nonatomic) float particleLifeSpanVariation;
@property(nonatomic) float particleLifeSpan;
@property(nonatomic) float particleAngularVelocityVariation;
@property(nonatomic) float particleAngularVelocity;
@property(nonatomic) float particleVelocityVariation;
@property(nonatomic) float particleVelocity;
@property(nonatomic) float particleAngleVariation;
@property(nonatomic) float particleAngle;
@property(nonatomic, getter=isBlackPassEnabled) BOOL blackPassEnabled;
@property(nonatomic) BOOL particleDiesOnCollision;
- (void)setSoftParticlesEnabled:(BOOL)arg1;
- (BOOL)areSoftParticlesEnabled;
@property(nonatomic, getter=isLightingEnabled) BOOL lightingEnabled;
- (void)setPhysicsCollisionsEnabled:(BOOL)arg1;
- (BOOL)physicsCollisionsEnabled;
@property(nonatomic) BOOL affectedByPhysicsFields;
- (void)setIsLocal:(BOOL)arg1;
@property(nonatomic) BOOL loops;
@property(nonatomic) float spreadingAngle;
@property(nonatomic) struct SCNVector3 emittingDirection;
@property(nonatomic) int birthDirection;
@property(nonatomic) int birthLocation;
@property(retain, nonatomic) SCNGeometry *emitterShape;
@property(nonatomic) float warmupDuration;
@property(nonatomic) float birthRateVariation;
@property(nonatomic) float birthRate;
@property(nonatomic) float idleDurationVariation;
@property(nonatomic) float idleDuration;
@property(nonatomic) float emissionDurationVariation;
@property(nonatomic) float emissionDuration;
@property(retain, nonatomic) id particleImage;
- (struct __C3DParticleSystem *)particleSystemRef;
@property(nonatomic) float fresnelExponent;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void)_syncObjCAnimations;
- (void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (id)scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

