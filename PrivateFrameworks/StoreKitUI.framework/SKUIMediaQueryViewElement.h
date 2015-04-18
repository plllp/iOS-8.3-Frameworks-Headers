//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class MPMediaQuery, NSMutableDictionary, NSString;

@interface SKUIMediaQueryViewElement : SKUIViewElement
{
    NSString *_cellFactoryFunctionName;
    MPMediaQuery *_mediaQuery;
    int _mediaQueryStyle;
    NSMutableDictionary *_propertyAggregrateFunctions;
}

- (id)factoryRepresentationWithMediaEntity:(id)arg1;
@property(readonly, nonatomic) NSString *cellFactoryFunctionName; // @synthesize cellFactoryFunctionName=_cellFactoryFunctionName;
@property(readonly, nonatomic) int mediaQueryStyle; // @synthesize mediaQueryStyle=_mediaQueryStyle;
- (int)pageComponentType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPMediaQuery *mediaQuery; // @synthesize mediaQuery=_mediaQuery;

@end
