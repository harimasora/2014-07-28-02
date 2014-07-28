//
//  DMRMasterViewController.h
//  projeto2014-07-28-01
//
//  Created by Danilo Maia Rodrigues on 7/28/14.
//  Copyright (c) 2014 Danilo Maia Rodrigues. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface DMRMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
