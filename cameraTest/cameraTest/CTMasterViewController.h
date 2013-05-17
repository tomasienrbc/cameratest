//
//  CTMasterViewController.h
//  CameraTest
//
//  Created by Matt Russo on 5/17/13.
//  Copyright (c) 2013 Enterbridge Mobility. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CTDetailViewController;

#import <CoreData/CoreData.h>

@interface CTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) CTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
