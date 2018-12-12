//
//  AppDelegate.h
//  GFCoreDataSource
//
//  Created by Golf on 12/19/2016.
//  Copyright (c) 2016 Golf. All rights reserved.
//

@import UIKit;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

+ (AppDelegate *)appDelegate;

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, readonly) NSManagedObjectContext          *managedObjectContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator    *persistentStoreCoordinator;

@end
