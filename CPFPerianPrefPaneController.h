/* CPFPerianPrefPaneController */

#import <Cocoa/Cocoa.h>
#import <PreferencePanes/NSPreferencePane.h>

#define ComponentInfoDictionaryKey	@"Components"
#define BundleVersionKey @"CFBundleVersion"
#define ComponentNameKey @"Name"
#define ComponentArchiveNameKey @"ArchiveName"
#define ComponentTypeKey @"Type"

typedef enum
{
	InstallStatusNotInstalled,
	InstallStatusOutdated,
	InstallStatusInstalled
} InstallStatus;

typedef enum
{
	ComponentTypeQuickTime,
	ComponentTypeCoreAudio,
	ComponentTypeFramework
} ComponentType;

@interface CPFPerianPrefPaneController : NSPreferencePane
{
	//General Pane
	IBOutlet NSButton					*button_install;
	IBOutlet NSTextField				*textField_installStatus;
	IBOutlet NSProgressIndicator		*progress_install;
	
	IBOutlet NSTextField				*textField_currentVersion;
	IBOutlet NSButton					*button_updateCheck;
	IBOutlet NSProgressIndicator		*progress_updateCheck;
	IBOutlet NSButton					*button_autoUpdateCheck;
	
	//AC3
	IBOutlet NSButton					*button_ac3DynamicRange;
	IBOutlet NSButton					*button_ac3StereoOverDolby;
	
	//About
	IBOutlet NSTextView					*textView_about;
	IBOutlet NSButton					*button_website;
	IBOutlet NSButton					*button_donate;
	IBOutlet NSButton					*button_forum;
	
	InstallStatus						installStatus; //This is only marked as installed if everything is installed
	
	NSURL								*perianForumURL;
	NSURL								*perianDonateURL;
	NSURL								*perianWebSiteURL;
	
	CFStringRef							perianAppID;
	CFStringRef							a52AppID;
	
}
//General Pane
- (IBAction)installUninstall:(id)sender;
- (IBAction)updateCheck:(id)sender;
- (IBAction)setAutoUpdateCheck:(id)sender;

//AC3
- (IBAction)setAC3DynamicRange:(id)sender;
- (IBAction)setAC3StereoOverDolby:(id)sender;

//About
- (IBAction)launchWebsite:(id)sender;
- (IBAction)launchDonate:(id)sender;
- (IBAction)launchForum:(id)sender;

@end