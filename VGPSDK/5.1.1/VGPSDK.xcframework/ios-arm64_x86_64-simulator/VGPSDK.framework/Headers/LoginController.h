//
//  LoginController.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <AuthenticationServices/AuthenticationServices.h>
#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LoginController : VGPSDKController <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UIImageView *logoImageView;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UITextField *usernameField;
@property (nonatomic, strong) UITextField *passwordField;
@property (nonatomic, strong) UIButton *registerButton;
@property (nonatomic, strong) UIButton *forgotPasswordButton;
@property (nonatomic, strong) UIButton *loginButton;
@property (nonatomic, strong) UILabel *socialLoginLabel;
@property (nonatomic, strong) UIButton *googleLoginButton;
@property (nonatomic, strong) UIButton *facebookLoginButton;
@property (nonatomic, strong) UIButton *appleLoginButton;
@property (nonatomic, strong) UIButton *quickLoginButton;
@property (nonatomic, strong) UIButton *termsCheckbox;
@property (nonatomic, strong) UIButton *termsLabel;
@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END