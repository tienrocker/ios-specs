//
//  VGPInterface+AppLifecycle.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (AppLifecycle)

#pragma mark - App Lifecycle
- (BOOL)application:(UIApplication *_Nonnull)application didFinishLaunchingWithOptions:(nullable NSDictionary<UIApplicationLaunchOptionsKey, id> *)launchOptions API_AVAILABLE(ios(3.0));
- (void)applicationDidBecomeActive:(UIApplication *_Nonnull)application;
- (void)didBecomeActiveNotification:(NSNotification *)notification;

#pragma mark - URL Handling
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nullable)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *_Nullable)options;
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nullable)url sourceApplication:(nullable NSString *)sourceApplication annotation:(id _Nullable )annotation;
- (BOOL)application:(UIApplication *_Nonnull)application continueUserActivity:(NSUserActivity *_Nullable)userActivity restorationHandler:(void (^_Nullable)(NSArray<id<UIUserActivityRestoring>> * _Nullable))restorationHandler;
- (void)application:(UIApplication *_Nonnull)application didChangeStatusBarOrientation:(UIInterfaceOrientation)oldStatusBarOrientation;

#pragma mark - Scene Lifecycle (iOS 13+)
- (void)scene:(UIScene *_Nonnull)scene willConnectToSession:(UISceneSession *_Nullable)session options:(UISceneConnectionOptions *_Nullable)connectionOptions  API_AVAILABLE(ios(13.0));
- (void)scene:(UIScene *_Nonnull)scene openURLContexts:(NSSet<UIOpenURLContext *> *_Nonnull)URLContexts  API_AVAILABLE(ios(13.0));
- (void)scene:(UIScene *_Nonnull)scene continueUserActivity:(NSUserActivity *_Nonnull)userActivity  API_AVAILABLE(ios(13.0));
- (void)sceneDidBecomeActive:(UIScene *_Nullable)scene  API_AVAILABLE(ios(13.0));

@end

NS_ASSUME_NONNULL_END

