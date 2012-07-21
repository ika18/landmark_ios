//
//  MainViewController.h
//  Landmark
//
//  Created by Lanvige Jiang on 7/21/12.
//  Copyright (c) 2012 LANVIGE. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BaseViewController.h"
//#import "CreateSharingViewController.h"

@class CreateSharingViewController;

@interface MainViewController : BaseViewController

@property (nonatomic, strong) IBOutlet UIBarButtonItem *shareButton;
@property (nonatomic, strong) CreateSharingViewController *csViewController;

@end
