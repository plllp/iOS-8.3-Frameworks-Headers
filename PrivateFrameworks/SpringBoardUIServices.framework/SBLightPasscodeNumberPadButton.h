//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPNumberPadLightStyleButton.h"

#import "SBUIPasscodeNumberPadButton.h"

@class NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>
{
}

+ (struct UIEdgeInsets)paddingOutsideRing;
+ (float)_numberPadButtonOuterCircleDiameter;
+ (struct CGSize)defaultSize;
- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;
- (int)characterType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
