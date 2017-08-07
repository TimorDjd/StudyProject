//
//  AppDelegate.h
//  StudyProject
//
//  Created by Tim Green on 2017/8/7.
//  Copyright © 2017年 Tim Green. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

