//
// Created by Jerome on 13/4/13.
//
//

#import <Foundation/Foundation.h>
#import "LocalFolder.h"

@protocol CloudServiceManager <NSObject>

// Returns the singleton service manager for this particular service.
+ (id<CloudServiceManager>)sharedServiceManager;

// Takes in a ViewController.
// Triggers the cloud service's login procedure.
- (void)loginWithViewController:(UIViewController *)controller;

// Takes in a path on the file service, and a LocalFolder.
// Downloads the file at that path and stores it in the LocalFolder.
// Returns YES if successful, NO otherwise.
- (BOOL)downloadFileAtPath:(NSString *)path toFolder:(LocalFolder *)folder;

@end