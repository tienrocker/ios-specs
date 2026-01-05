//
//  VGPInterface+Notifications.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Notifications)

#pragma mark - Push Notification Handlers
- (void)application:(UIApplication *_Nullable)application didReceiveRemoteNotification:(NSDictionary *_Nullable)userInfo
fetchCompletionHandler:(void (^_Nullable)(UIBackgroundFetchResult))completionHandler;

- (void)userNotificationCenter:(UNUserNotificationCenter *)center
       willPresentNotification:(UNNotification *)notification
         withCompletionHandler:(void (^)(UNNotificationPresentationOptions options))completionHandler API_AVAILABLE(ios(10.0));

- (void)userNotificationCenter:(UNUserNotificationCenter *)center
didReceiveNotificationResponse:(UNNotificationResponse *)response
         withCompletionHandler:(void(^)(void))completionHandler API_AVAILABLE(ios(10.0));

- (void)messaging:(FIRMessaging *)messaging didReceiveRegistrationToken:(NSString *)fcmToken;

- (void)application:(UIApplication*_Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*_Nonnull)deviceToken;
- (void)application:(UIApplication*_Nonnull)application didFailToRegisterForRemoteNotificationsWithError:(NSError*_Nonnull)error;

@end

NS_ASSUME_NONNULL_END

