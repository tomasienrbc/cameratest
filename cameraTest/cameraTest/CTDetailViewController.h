//
//  CTDetailViewController.h
//  CameraTest
//
//  Created by Matt Russo on 5/17/13.
//  Copyright (c) 2013 Enterbridge Mobility. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
