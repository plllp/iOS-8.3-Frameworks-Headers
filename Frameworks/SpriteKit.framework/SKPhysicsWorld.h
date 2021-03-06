//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface SKPhysicsWorld : NSObject <NSCoding>
{
    float speed;
    id <SKPhysicsContactDelegate> _contactDelegate;
    struct CGVector _gravity;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)fields;
- (id)bodies;
@property(nonatomic) struct CGVector gravity; // @synthesize gravity=_gravity;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) id <SKPhysicsContactDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
- (id).cxx_construct;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (void)addJoint:(id)arg1;
- (void)removeJoint:(id)arg1;
@property(nonatomic) float speed; // @synthesize speed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
-     // Error parsing type: 24@0:48, name: sampleFieldsAt:
-     // Error parsing type: 24@0:48, name: sampleFields:
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeAllJoints;
- (void)removeAllBodies;
- (BOOL)hasFields;
- (BOOL)hasBodies;

@end

