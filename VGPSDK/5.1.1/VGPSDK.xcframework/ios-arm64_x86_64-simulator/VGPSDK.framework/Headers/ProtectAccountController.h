//
//  ProtectAccountController.h
//  VGPSDK
//
//  Created by  Tien Tran on 3/25/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <AuthenticationServices/AuthenticationServices.h>
#import "VGPSDKController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProtectAccountController : VGPSDKController <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) UIButton *backButton;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UIView *separatorLine;
@property (nonatomic, strong) UILabel *usernameLabel;
@property (nonatomic, strong) UILabel *idLabel;

@property (nonatomic, strong) UIButton *googleLinkButton;
@property (nonatomic, strong) UIImageView *googleLinkIcon;
@property (nonatomic, strong) UILabel *googleLinkLabel;
@property (nonatomic, strong) UILabel *googleLinkStatusLabel;

@property (nonatomic, strong) UIButton *facebookLinkButton;
@property (nonatomic, strong) UIImageView *facebookLinkIcon;
@property (nonatomic, strong) UILabel *facebookLinkLabel;
@property (nonatomic, strong) UILabel *facebookLinkStatusLabel;

@property (nonatomic, strong) UIButton *appleLinkButton;
@property (nonatomic, strong) UIImageView *appleLinkIcon;
@property (nonatomic, strong) UILabel *appleLinkLabel;
@property (nonatomic, strong) UILabel *appleLinkStatusLabel;

@property (nonatomic, strong) UIButton *quickLinkButton;
@property (nonatomic, strong) UIImageView *quickLinkIcon;
@property (nonatomic, strong) UILabel *quickLinkLabel;
@property (nonatomic, strong) UILabel *quickLinkStatusLabel;

@property (nonatomic, strong) UILabel *versionLabel;

@end

NS_ASSUME_NONNULL_END
