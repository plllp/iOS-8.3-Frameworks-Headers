//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKAppDocument, NSDictionary, NSString, SKUINavigationDocumentController, UIViewController;

@interface SKUIDocumentStackItem : NSObject
{
    IKAppDocument *_document;
    SKUINavigationDocumentController *_navigationDocumentController;
    NSDictionary *_presentationOptions;
    BOOL _usesNavigationControllerForModalPresentation;
    UIViewController *_viewController;
}

@property(nonatomic) BOOL usesNavigationControllerForModalPresentation; // @synthesize usesNavigationControllerForModalPresentation=_usesNavigationControllerForModalPresentation;
@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
@property(readonly, nonatomic) NSString *sourceElementIdentifier;
@property(readonly, nonatomic) NSString *overlayType;
@property(readonly, nonatomic) NSString *sheetType;
@property(readonly, nonatomic) NSString *presentationType;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;
@property(readonly, nonatomic) NSDictionary *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) IKAppDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic, getter=isAnimated) BOOL animated;

@end

