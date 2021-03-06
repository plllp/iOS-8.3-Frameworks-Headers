//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

#import "DOMEventTarget.h"

@class DOMDocument, DOMElement, DOMNamedNodeMap, DOMNodeList, NSString;

@interface DOMNode : DOMObject <DOMEventTarget>
{
}

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg1;
- (id)boundingBoxes;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (BOOL)isDefaultNamespace:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)hasAttributes;
- (BOOL)isSupported:(id)arg1:(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (void)normalize;
- (id)cloneNode:(BOOL)arg1;
- (BOOL)hasChildNodes;
- (id)appendChild:(id)arg1;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
@property(copy) NSString *textContent;
@property(readonly, copy) NSString *baseURI;
@property(copy) NSString *prefix;
@property(readonly, copy) NSString *namespaceURI;
@property(copy) NSString *nodeValue;
- (void)removeEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(BOOL)arg3;
- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)contains:(id)arg1;
- (id)lookupNamespaceURI:(id)arg1;
- (void)finalize;
- (id)hrefTitle;
- (struct CGRect)hrefFrame;
- (id)hrefTarget;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (struct Element *)_linkElement;
- (id)textRects;
- (struct RootObject *)_rootObject;
@property(readonly, copy) NSString *nodeName;
@property(readonly, copy) NSString *localName;
- (float)computedFontSize;
- (id)previousFocusNode;
- (id)nextFocusNode;
@property(readonly) DOMNamedNodeMap *attributes;
@property(readonly) DOMNode *nextSibling;
- (struct _WKQuad)absoluteQuadAndInsideFixedPosition:(char *)arg1;
- (BOOL)containsOnlyInlineObjects;
- (BOOL)isSelectableBlock;
- (struct CGRect)boundingBox;
@property(readonly) DOMElement *parentElement;
- (id)rangeOfContainingParagraph;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint)arg1;
@property(readonly) unsigned short nodeType;
- (float)textHeight;
- (id)absoluteQuads;
- (id)hrefURL;
- (struct _WKQuad)absoluteQuad;
- (id)borderRadii;
- (void)inspect;
- (BOOL)isSameNode:(id)arg1;
- (struct CGRect)boundingFrame;
- (id)hrefLabel;
- (struct _WKQuad)innerFrameQuad;
- (id)removeChild:(id)arg1;
@property(readonly) DOMNode *previousSibling;
- (struct CGRect)boundingBoxUsingTransforms;
@property(readonly) DOMNode *parentNode;
@property(readonly) BOOL isContentEditable;
@property(readonly) DOMNode *firstChild;
@property(readonly) DOMNode *lastChild;
@property(readonly) DOMNodeList *childNodes;
@property(readonly) DOMDocument *ownerDocument;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

