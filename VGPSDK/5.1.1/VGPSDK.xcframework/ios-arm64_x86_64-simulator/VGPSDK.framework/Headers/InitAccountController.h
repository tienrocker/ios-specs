//
//  InitAccountController.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/11/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface InitAccountController : VGPSDKController

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UITextField *usernameField;
@property (nonatomic, strong) UITextField *passwordField;
@property (nonatomic, strong) UIButton *updateButton;
@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, strong) UIButton *termsCheckbox;
@property (nonatomic, strong) UIButton *termsLabel;
@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END

