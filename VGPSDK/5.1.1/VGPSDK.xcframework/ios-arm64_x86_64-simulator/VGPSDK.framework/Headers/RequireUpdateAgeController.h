//
//  RequireUpdateAgeController.h
//  VGPSDK
//
//  Created by Tien Tran on 9/12/24.
//  Copyright © 2024  Tien Tran. All rights reserved.
//

#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequireUpdateAgeController : VGPSDKController

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, strong) UIButton *updateButton;
@property (nonatomic, strong) UIButton *logoutButton;
@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END
