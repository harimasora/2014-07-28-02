//
//  DMRAppDelegate.h
//  projeto2014-07-28-01
//
//  Created by Danilo Maia Rodrigues on 7/28/14.
//  Copyright (c) 2014 Danilo Maia Rodrigues. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DMRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
