//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController
{
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_diagnosticDataGroupSpecifier;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    PSSpecifier *_spinnerSpecifier;
}

+ (BOOL)isProblemReportingEnabled;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutDiagnosticsSheet;
- (BOOL)shouldEnableProblemReportingForCheckedSpecifier;
- (void)launchDiagnosticsSession:(id)arg1;
- (void)setProblemReportingEnabled:(BOOL)arg1;
- (void)checkDiagnosticsSessionAvailability;
- (id)shouldShareAppActivityWithAppDevelopers;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (void)snapshot:(id)arg1;
@property(readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property(readonly) PSSpecifier *spinnerSpecifier;
@property(readonly) NSArray *appActivitySpecifiers;
- (void)dismissAboutSheet:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end

