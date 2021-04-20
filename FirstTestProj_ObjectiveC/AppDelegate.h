//
//  AppDelegate.h
//  FirstTestProj_ObjectiveC
//
//  Created by gmo on 4/20/21.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

