//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AVMediaSelectionOption, AVPlayerController, NSString, UITableView;

@interface AVMediaSelectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
    AVPlayerController *_playerController;
    CDUnknownBlockType _doneButtonHandler;
}

@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_doneButtonTapped:(id)arg1;
- (BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;
- (BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType doneButtonHandler; // @synthesize doneButtonHandler=_doneButtonHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
