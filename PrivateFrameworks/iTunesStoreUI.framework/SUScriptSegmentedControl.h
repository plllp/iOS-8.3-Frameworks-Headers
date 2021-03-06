//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSNumber, NSString, SUSegmentedControl, SUStorePageViewController;

@interface SUScriptSegmentedControl : SUScriptObject
{
    NSArray *_segments;
    int _style;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *rawSegments;
@property(readonly) int tintStyleDefault;
@property(readonly) int tintStyleDark;
@property(readonly) NSNumber *noSegmentIndex;
@property(readonly) unsigned int controlStateSelected;
@property(readonly) unsigned int controlStateNormal;
@property(readonly) unsigned int controlStateHighlighted;
@property(readonly) unsigned int controlStateDisabled;
- (id)titleShadowColorForControlState:(unsigned int)arg1;
- (id)titleColorForControlState:(unsigned int)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (void)showMoreListAnimated:(BOOL)arg1;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned int)arg2;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)hideMoreListAnimated:(BOOL)arg1;
@property(copy) id showsMoreListAutomatically;
- (int)_sectionsStyleForString:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
@property int maximumNumberOfItems;
- (void)_setRawSegments:(id)arg1;
@property(readonly, nonatomic) SUStorePageViewController *storePageViewController;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned int)arg3;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
@property(readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
- (id)_newNativeSegmentedControl;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
@property(retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
@property(readonly, nonatomic) int nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)initWithPageSectionGroup:(id)arg1;
@property int tintStyle;
- (id)attributeKeys;
@property(copy) NSString *moreListTitle;
- (id)_className;
- (id)scriptAttributeKeys;
@property(copy) NSString *cancelButtonTitle;
@property(readonly) NSNumber *selectedSegmentIndex;
@property(retain) NSNumber *selectedIndex;
@property float maximumWidth;
@property(retain) NSString *style;
@property(copy) id tintColor;
- (void)dealloc;
@property(retain) id segments;

@end

