//
//  MainViewController.h
//  arc
//
//  Created by Benedict Liang on 19/3/13.
//  Copyright (c) 2013 nus.cs3217. All rights reserved.
//

#import "ArcSplitViewController.h"
#import "ArcSplitViewControllerDelegate.h"
#import "MainViewControllerDelegate.h"
#import "CodeViewController.h"
#import "SettingsViewController.h"
#import "LeftViewController.h"
#import "ApplicationState.h"
#import "RootFolder.h"
#import "Folder.h"
#import "File.h"
#import "TMBundleHeader.h"

@interface MainViewController : ArcSplitViewController <MainViewControllerDelegate,
    ArcSplitViewControllerDelegate, UIActionSheetDelegate>
@end
