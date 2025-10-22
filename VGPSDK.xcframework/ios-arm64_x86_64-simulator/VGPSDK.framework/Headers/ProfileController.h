//
//  ProfileController.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/5/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProfileController : VGPSDKController

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UILabel *usernameLabel;
@property (nonatomic, strong) UILabel *idLabel;
@property (nonatomic, strong) UIButton *infoAccountButton;
@property (nonatomic, strong) UIButton *linkAccountButton;
@property (nonatomic, strong) UIButton *deleteAccountButton;
@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END
