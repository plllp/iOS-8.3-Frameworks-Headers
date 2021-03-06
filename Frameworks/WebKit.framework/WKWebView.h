//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSData, NSString, NSURL, UIScrollView, WKBackForwardList, WKBrowsingContextHandle, WKWebViewConfiguration, _WKSessionState, _WKWebViewPrintFormatter;

@interface WKWebView : UIView <UIScrollViewDelegate>
{
    struct RetainPtr<WKWebViewConfiguration> _configuration;
    struct RefPtr<WebKit::WebPageProxy> _page;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState>> _navigationState;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate>> _uiDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    unsigned int _observedRenderingProgressEvents;
    struct WeakObjCPtr<id<_WKFormDelegate>> _formDelegate;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    BOOL _overridesMinimumLayoutSize;
    struct CGSize _minimumLayoutSizeOverride;
    BOOL _overridesMinimumLayoutSizeForMinimalUI;
    struct CGSize _minimumLayoutSizeOverrideForMinimalUI;
    BOOL _overridesMaximumUnobscuredSize;
    struct CGSize _maximumUnobscuredSizeOverride;
    BOOL _usesMinimalUI;
    BOOL _needsToNotifyDelegateAboutMinimalUI;
    struct CGRect _inputViewBounds;
    float _viewportMetaTagWidth;
    struct UIEdgeInsets _obscuredInsets;
    BOOL _haveSetObscuredInsets;
    BOOL _isChangingObscuredInsetsInteractively;
    int _interfaceOrientationOverride;
    BOOL _overridesInterfaceOrientation;
    BOOL _hasCommittedLoadForMainFrame;
    BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
    unsigned long long _firstPaintAfterCommitLoadTransactionID;
    int _dynamicViewportUpdateMode;
    struct CATransform3D _resizeAnimationTransformAdjustments;
    unsigned long long _resizeAnimationTransformTransactionID;
    struct RetainPtr<UIView> _resizeAnimationView;
    float _lastAdjustmentForScroller;
    BOOL _needsToRestoreExposedRect;
    struct FloatRect _exposedRectToRestore;
    BOOL _needsToRestoreUnobscuredCenter;
    struct FloatPoint _unobscuredCenterToRestore;
    unsigned long long _firstTransactionIDAfterPageRestore;
    double _scaleToRestore;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    BOOL _allowsBackForwardNavigationGestures;
    struct RetainPtr<UIView<WKWebViewContentProvider>> _customContentView;
    struct RetainPtr<UIView> _customContentFixedOverlayView;
    struct Color _scrollViewBackgroundColor;
    BOOL _delayUpdateVisibleContentRects;
    BOOL _hadDelayedUpdateVisibleContentRects;
    BOOL _pageIsPrintingToPDF;
    struct RetainPtr<CGPDFDocument *> _printedDocument;
}

@property(nonatomic) __weak id <WKUIDelegate> UIDelegate;
- (void)_close;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_contentSizeCategory;
@property(nonatomic, setter=_setPrintedDocument:) struct CGPDFDocument *_printedDocument;
- (void)_endPrinting;
- (int)_computePageCountAndStartDrawingToPDFForFrame:(id)arg1 printInfo:(const struct PrintInfo *)arg2 firstPage:(unsigned int)arg3 computedTotalScaleFactor:(double *)arg4;
@property(readonly, nonatomic) _WKWebViewPrintFormatter *_webViewPrintFormatter;
@property(readonly, nonatomic) NSString *_suggestedFilenameForDisplayedPDF;
@property(readonly, nonatomic) NSData *_dataForDisplayedPDF;
- (id)_viewForFindUI;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 minimumLayoutSizeForMinimalUI:(struct CGSize)arg2 maximumUnobscuredSizeOverride:(struct CGSize)arg3;
- (void)_snapshotRect:(struct CGRect)arg1 intoImageOfWidth:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_resizeWhileHidingContentWithUpdates:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setInterfaceOrientationOverride:) int _interfaceOrientationOverride;
@property(readonly, nonatomic, getter=_isShowingNavigationGestureSnapshot) BOOL _showingNavigationGestureSnapshot;
@property(readonly, nonatomic, getter=_isDisplayingStandaloneImageDocument) BOOL _displayingStandaloneImageDocument;
- (void)_hideFindUI;
- (void)_findString:(id)arg1 options:(unsigned int)arg2 maxCount:(unsigned int)arg3;
- (void)_countStringMatches:(id)arg1 options:(unsigned int)arg2 maxCount:(unsigned int)arg3;
@property(nonatomic, setter=_setFindDelegate:) __weak id <_WKFindDelegate> _findDelegate;
@property(nonatomic, setter=_setPageZoomFactor:) double _pageZoomFactor;
@property(nonatomic, setter=_setTextZoomFactor:) double _textZoomFactor;
@property(readonly, nonatomic) BOOL _supportsTextZoom;
- (void)_getWebArchiveDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getMainResourceDataWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setObservedRenderingProgressEvents:) unsigned int _observedRenderingProgressEvents;
@property(readonly, nonatomic) BOOL _networkRequestsInProgress;
@property(nonatomic, setter=_setAddsVisitedLinks:) BOOL _addsVisitedLinks;
@property(nonatomic, setter=_setAllowsRemoteInspection:) BOOL _allowsRemoteInspection;
- (id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2;
- (void)_restoreFromSessionStateData:(id)arg1;
@property(readonly, nonatomic) _WKSessionState *_sessionState;
@property(readonly, nonatomic) NSData *_sessionStateData;
- (void)_didRelaunchProcess;
- (void)_killWebContentProcess;
@property(readonly, nonatomic) int _webProcessIdentifier;
@property(copy, setter=_setCustomUserAgent:) NSString *_customUserAgent;
@property(copy, setter=_setApplicationNameForUserAgent:) NSString *_applicationNameForUserAgent;
@property(readonly, nonatomic) NSString *_MIMEType;
@property(readonly, nonatomic) NSURL *_committedURL;
@property(readonly, nonatomic) NSArray *_certificateChain;
- (void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
@property(readonly, nonatomic) NSURL *_unreachableURL;
@property(nonatomic, setter=_setHistoryDelegate:) __weak id <WKHistoryDelegatePrivate> _historyDelegate;
@property(readonly, nonatomic, getter=_isDisplayingPDF) BOOL _displayingPDF;
@property(nonatomic, setter=_setMaximumUnobscuredSizeOverride:) struct CGSize _maximumUnobscuredSizeOverride;
@property(nonatomic, setter=_setMinimumLayoutSizeOverrideForMinimalUI:) struct CGSize _minimumLayoutSizeOverrideForMinimalUI;
@property(nonatomic, setter=_setMinimumLayoutSizeOverride:) struct CGSize _minimumLayoutSizeOverride;
- (void)_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) float _viewportMetaTagWidth;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_zoomToFocusRect:(struct FloatRect)arg1 selectionRect:(struct FloatRect)arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(BOOL)arg6 forceScroll:(BOOL)arg7;
- (void)_scrollToContentOffset:(struct FloatPoint)arg1;
- (PassRefPtr_d1f98d0a)_takeViewSnapshot;
- (void)_restorePageStateToUnobscuredCenter:(struct FloatPoint)arg1 scale:(double)arg2;
- (void)_restorePageStateToExposedRect:(struct FloatRect)arg1 scale:(double)arg2;
- (void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(struct CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_processDidExit;
@property(nonatomic, setter=_setUsesMinimalUI:) BOOL _usesMinimalUI;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_setViewportMetaTagWidth:(float)arg1;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String *)arg1 data:(id)arg2;
- (void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const struct String *)arg2;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)reloadFromOrigin;
@property(readonly, nonatomic) BOOL hasOnlySecureContent;
- (id)goToBackForwardListItem:(id)arg1;
@property(nonatomic) __weak id <WKNavigationDelegate> navigationDelegate;
- (BOOL)usesStandardContentView;
- (void)_zoomToRect:(struct FloatRect)arg1 atScale:(double)arg2 origin:(struct FloatPoint)arg3 animated:(BOOL)arg4;
- (BOOL)_scrollToRect:(struct FloatRect)arg1 origin:(struct FloatPoint)arg2 minimumScrollDistance:(float)arg3;
- (void)_zoomToPoint:(struct FloatPoint)arg1 atScale:(double)arg2 animated:(BOOL)arg3;
- (struct CGRect)_contentRectForUserInteraction;
- (id)_currentContentView;
- (void)_endAnimatedResize;
- (struct CGPoint)_adjustedContentOffset:(struct CGPoint)arg1;
- (void)_updateScrollViewBackground;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
@property(nonatomic, setter=_setBackgroundExtendsBeyondPage:) BOOL _backgroundExtendsBeyondPage;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_beginInteractiveObscuredInsetsChange;
@property(nonatomic, setter=_setObscuredInsets:) struct UIEdgeInsets _obscuredInsets;
@property(nonatomic) BOOL allowsBackForwardNavigationGestures;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (void)_didFinishScrolling;
- (void)_updateVisibleContentRects;
- (id)browsingContextController;
- (void)_zoomOutWithOrigin:(struct FloatPoint)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets _computedContentInset;
@property(readonly, nonatomic) id _remoteObjectRegistry;
- (BOOL)_zoomToRect:(struct FloatRect)arg1 withOrigin:(struct FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
@property(readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
- (void)_windowDidRotate:(id)arg1;
@property(readonly, nonatomic) double estimatedProgress;
@property(nonatomic, setter=_setFormDelegate:) __weak id <_WKFormDelegate> _formDelegate;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void).cxx_destruct;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (id).cxx_construct;
- (id)goForward;
- (id)goBack;
- (void)stopLoading;
@property(readonly) unsigned int _pageCount;
@property(nonatomic, setter=_setGapBetweenPages:) float _gapBetweenPages;
@property(nonatomic, setter=_setPageLength:) float _pageLength;
@property(nonatomic, setter=_setPaginationBehavesLikeColumns:) BOOL _paginationBehavesLikeColumns;
@property(nonatomic, setter=_setPaginationMode:) int _paginationMode;
- (void)_frameOrBoundsChanged;
@property(readonly, nonatomic) BOOL canGoForward;
@property(readonly, nonatomic) BOOL canGoBack;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, nonatomic) WKBackForwardList *backForwardList;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (Class)_printFormatterClass;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(struct CGSize)arg3;
@property(readonly, copy, nonatomic) NSString *title;
- (id)reload;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setOpaque:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) WKBrowsingContextHandle *_handle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

