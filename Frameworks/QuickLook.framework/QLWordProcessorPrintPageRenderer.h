//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper
{
    UIWebPaginationInfo *_paginationInfo;
}

- (int)numberOfPages;
- (void)dealloc;
- (id)_paginationInfo;
- (id)pdfDataForPageAtIndex:(int)arg1 printingDone:(char *)arg2;

@end
