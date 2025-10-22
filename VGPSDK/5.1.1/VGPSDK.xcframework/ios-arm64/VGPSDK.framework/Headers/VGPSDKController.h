//
//  VGPSDKController.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/4/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SafariServices/SafariServices.h>
#import "VGPConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPSDKController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate, UIActionSheetDelegate, UIApplicationDelegate, SFSafariViewControllerDelegate>

@property BOOL SHOW_BACK_BUTTON;
@property (nonatomic) CGRect curentFrame;
@property (strong, nonatomic) UIFont *tinyFont;
@property (strong, nonatomic) UIFont *textFont;
@property (strong, nonatomic) UIFont *smallTextFont;
@property (strong, nonatomic) UIFont *giantTextFont;
@property (strong, nonatomic) UIFont *tinyButtonFont;
@property (strong, nonatomic) UIFont *smallButtonFont;
@property (strong, nonatomic) UIFont *buttonFont;
@property (strong, nonatomic) UIFont *giantButtonFont;
- (void)updateUI;
- (void)updateUIText;
- (void)rightCloseButtonClick;
- (void)leftBackButtonClick;

@property (strong, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (strong, nonatomic) UIView *loadingView;
- (void)showLoadingView;
- (void)hideLoadingView;
- (void)dismissKeyboard;
- (BOOL)isLandscape;

- (void)safariViewControllerDidFinish:(SFSafariViewController *)controller;
- (CGFloat)currentContainerSize;
- (void)addEyeButtonTo:(UITextField *)textField;
@end

NS_ASSUME_NONNULL_END
