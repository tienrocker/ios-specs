//
//  VGPUI.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/5/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "VGPHelper.h"
#import "LoginController.h"
#import "RegisterController.h"
#import "ProfileController.h"
#import "InitAccountController.h"
#import "ProtectAccountController.h"
#import "RequireUpdateAgeController.h"
#import "RequireUpdateInfoController.h"
#import "VGPLogger.h"

NS_ASSUME_NONNULL_BEGIN

#define DIS_MOVE_POPUP      -50

@interface VGPUI : NSObject

+ (VGPUI *)sharedInstance;

#pragma mark -  UI
- (LoginController *)LoginController;
- (RegisterController *)RegisterController;
- (ProfileController *)ProfileController;
- (InitAccountController *)InitAccountController;
- (ProtectAccountController *)ProtectAccountController;
- (RequireUpdateInfoController *)RequireUpdateAgeController;
- (RequireUpdateInfoController *)RequireUpdateInfoController;

#pragma mark -  Events
- (void)dismiss;
- (void)dismiss:(void (^ __nullable)(void))completion;
- (void)showLoginController;
- (void)showLoginController:(void (^ __nullable)(void))completion;
- (void)showRegisterController;
- (void)showRegisterController:(void (^ __nullable)(void))completion;
- (void)showProfileController;
- (void)showProfileController:(void (^ __nullable)(void))completion;
- (void)showInitAccountController;
- (void)showInitAccountController:(void (^ __nullable)(void))completion;
- (void)showProtectAccountController;
- (void)showProtectAccountController:(void (^ __nullable)(void))completion;
- (void)showRequireUpdateInfoController;
- (void)showRequireUpdateInfoController:(void (^ __nullable)(void))completion;
- (void)showRequireUpdateAgeController;
- (void)showRequireUpdateAgeController:(void (^ __nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END
