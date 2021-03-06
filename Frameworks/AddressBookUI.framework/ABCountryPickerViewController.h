//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPickerViewController.h>

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, UILocalizedIndexedCollation, UISearchBar, UISearchDisplayController, UITableView;

@interface ABCountryPickerViewController : ABPickerViewController <UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate>
{
    UITableView *_tableView;
    UILocalizedIndexedCollation *_collation;
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    NSDictionary *_indexToSections;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    NSArray *_filteredCountries;
    NSString *_selectedCountryCode;
    NSIndexPath *_selectedIndexPath;
    NSArray *_allCountries;
}

- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)setStyleProvider:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)scrollToSearchFieldAnimated:(BOOL)arg1;
- (void)configureSections;
- (void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2;
- (void)reloadCountryCodes;
@property(retain, nonatomic) NSString *selectedCountryCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

