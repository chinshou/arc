//
//  DetailViewControllerDelegate.h
//  arc
//
//  Created by Yong Michael on 5/4/13.
//  Copyright (c) 2013 nus.cs3217. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DetailViewControllerDelegate <NSObject>
- (void)showShowMasterViewButton:(UIBarButtonItem *)button;
- (void)hideShowMasterViewButton:(UIBarButtonItem *)button;
@end
