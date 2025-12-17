//
//  VGPInterface.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//  Version 5.1.8
//

#ifndef VGPInterface_h
#define VGPInterface_h

#import <UIKit/UIKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FirebaseCore/FirebaseCore.h>
#import <FirebaseAnalytics/FIRAnalytics.h>
#import <FirebaseAnalytics/FIREventNames.h>
#import <FirebaseAnalytics/FIRParameterNames.h>
#import <FirebaseMessaging/FirebaseMessaging.h>
#import <AppTrackingTransparency/ATTrackingManager.h>
#import <AdjustSdk/AdjustSdk.h>
#import <TikTokBusinessSDK/TikTokBusinessSDK.h>
#import <GoogleSignIn/GoogleSignIn.h>
#import "TMSocket.h"

@class VGPInterface;

@interface VGPInterface : UIResponder <UIApplicationDelegate, UNUserNotificationCenterDelegate, AdjustDelegate, FIRMessagingDelegate, TMSocketDelegate>

+ (VGPInterface *_Nonnull)sharedInstance;

#pragma mark - Data
- (NSInteger)getUserID;
- (NSString *_Nullable)getUsername;

#pragma mark - SDK Configuration
- (void)changeLocalization:(NSString *_Nonnull)localization;
- (void)showIDFAPromt;

#pragma mark - Account Management
- (void)loginGame;
- (void)loginGame:(void (^ __nullable)(void))completion;
- (void)logoutGame;
- (void)logoutGame:(void (^ __nullable)(void))completion;
- (void)showProfile;
- (void)showProfile:(void (^ __nullable)(void))completion;
- (void)deleteAccount;

#pragma mark - Purchase Management
- (void)purchase:(NSString *_Nonnull)characterID serverID:(NSString *_Nonnull)serverID itemID:(NSString *_Nonnull)itemID andIAPData:(NSString *_Nullable)iapData;

#pragma mark - Marketing Events
- (void)setGameVersion:(NSString*_Nonnull)code;
- (void)setGameCode:(NSString*_Nonnull)code;
- (void)logJoinServer:(NSString*_Nonnull)serverID setCharacterID:(NSString*_Nonnull)characterID;
- (void)logCreatedCharacter;
- (void)logLevelUp:(int) level;
- (void)logOpenPaymentScreen;
- (void)logPurchase:(int) money setItemID:(NSString*_Nonnull)itemID;
- (void)logStartDownloadResource;
- (void)logDownloadResourcePercent:(int)percent;
- (void)logDownloadResourceSuccess;
- (void)logDownloadResourceFail;
- (void)logStartExtractResource;
- (void)logExtractResourceSuccess;
- (void)logExtractResourceFail;
- (void)logStartCheckGameVersionClient;
- (void)logCheckGameVersionClientSuccess;
- (void)logCheckGameVersionClientFail;
- (void)logStartGetGameServerList;
- (void)logGetGameServerListSuccess;
- (void)logGetGameServerListFail;
- (void)logStartGetServerConfig;
- (void)logGetServerConfigSuccess;
- (void)logGetServerConfigFail;
- (void)shareFacebookImage:(NSString *_Nonnull)url;
- (void)shareFacebookImageLocal:(UIImage *_Nonnull)image;
#pragma mark - App Lifecycle
- (BOOL)application:(UIApplication *_Nonnull)application didFinishLaunchingWithOptions:(nullable NSDictionary<UIApplicationLaunchOptionsKey, id> *)launchOptions API_AVAILABLE(ios(3.0));
- (void)applicationDidBecomeActive:(UIApplication *_Nonnull)application;
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nullable)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *_Nullable)options;
- (BOOL)application:(UIApplication *_Nonnull)application openURL:(NSURL *_Nullable)url sourceApplication:(nullable NSString *)sourceApplication annotation:(id _Nullable )annotation;
- (BOOL)application:(UIApplication *_Nonnull)application continueUserActivity:(NSUserActivity *_Nullable)userActivity restorationHandler:(void (^_Nullable)(NSArray<id<UIUserActivityRestoring>> * _Nullable))restorationHandler;
- (void)application:(UIApplication *_Nonnull)application didChangeStatusBarOrientation:(UIInterfaceOrientation)oldStatusBarOrientation;
- (void)scene:(UIScene *_Nonnull)scene willConnectToSession:(UISceneSession *_Nullable)session options:(UISceneConnectionOptions *_Nullable)connectionOptions  API_AVAILABLE(ios(13.0));
- (void)scene:(UIScene *_Nonnull)scene openURLContexts:(NSSet<UIOpenURLContext *> *_Nonnull)URLContexts  API_AVAILABLE(ios(13.0));
- (void)scene:(UIScene *_Nonnull)scene continueUserActivity:(NSUserActivity *_Nonnull)userActivity  API_AVAILABLE(ios(13.0));
- (void)sceneDidBecomeActive:(UIScene *_Nullable)scene  API_AVAILABLE(ios(13.0));
- (void)application:(UIApplication *_Nullable)application didReceiveRemoteNotification:(NSDictionary *_Nullable)userInfo
fetchCompletionHandler:(void (^_Nullable)(UIBackgroundFetchResult))completionHandler;

#pragma mark - Push Notification Handlers
- (void)application:(UIApplication*_Nonnull)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*_Nonnull)deviceToken;
- (void)application:(UIApplication*_Nonnull)application didFailToRegisterForRemoteNotificationsWithError:(NSError*_Nonnull)error;

#pragma mark - Socket Management
- (void)tmSocketDidOpen:(id _Nonnull)sender;
- (void)tmSocket:(id _Nonnull)sender didReceiveMessage:(NSString *_Nonnull)message;
- (void)tmSocket:(id _Nonnull)sender didCloseWithEvent:(TMSocketCloseEvent *_Nullable)event;
- (void)tmSocket:(id _Nonnull)sender didFailWithError:(NSError *_Nonnull)error;
- (void)tmSocket:(id _Nonnull)sender didAttemptReconnect:(NSInteger)attemptCount;

@end

// Note: Category headers are not imported here to avoid header search path issues.
// All category methods are already declared in the main interface above.
// Category headers are compiled separately via Xcode project Headers build phase.

#endif /* VGPInterface_h */
