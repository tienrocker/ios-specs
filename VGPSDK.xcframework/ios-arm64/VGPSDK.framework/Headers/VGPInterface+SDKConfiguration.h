//
//  VGPInterface+SDKConfiguration.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (SDKConfiguration)

#pragma mark - SDK Configuration Methods
- (void)configureAdjustSDK;
- (void)configureFirebaseAndMessaging;
- (void)configureSocialSDKs:(UIApplication *)application launchOptions:(NSDictionary *)launchOptions;
- (void)configureNotifications:(UIApplication *)application;
- (void)configureIAPHandling;
- (void)configureSocketHandling;

@end

NS_ASSUME_NONNULL_END

