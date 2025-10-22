//
//  RegisterController.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/4/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <AuthenticationServices/AuthenticationServices.h>
#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface RegisterController : VGPSDKController

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UIButton *backButton;
@property (nonatomic, strong) UIImageView *logoImageView;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UITextField *usernameField;
@property (nonatomic, strong) UITextField *passwordField;
@property (nonatomic, strong) UITextField *rePasswordField;
@property (nonatomic, strong) UIButton *registerButton;
@property (nonatomic, strong) UIButton *termsCheckbox;
@property (nonatomic, strong) UIButton *termsLabel;
@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END
