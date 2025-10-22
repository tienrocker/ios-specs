//
//  VGPHelper.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <sys/utsname.h>
#import "VGPConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPHelper : NSObject

#define MyLog(x, ...) NSLog(@"VGP-LOG %s %d: " x, __FUNCTION__, __LINE__, ##__VA_ARGS__)
//#define FW_BUNDLE [NSBundle bundleForClass:[self class]]
#define FW_BUNDLE [NSBundle mainBundle]
#define LAYOUT_WIDTH 650.0f
#define LAYOUT_HEIGHT 320.0f
#define LAYOUT_WIDTH_LOGIN 620.0f
#define LAYOUT_HEIGHT_LOGIN 360.0f
#define LAYOUT_OFFSET 0.1f

+ (float)getScreenWidth;
+ (float)getScreenHeight;
+ (CGRect)aspectFitRect:(CGRect)outerRect withInnerRect:(CGRect)innerRect;

+ (UIImage*)getUIImageWithImageName:(nullable NSString*) imageName andType:(nullable NSString*) type;
    
+ (NSString *)stringFromDeviceToken:(NSData*)deviceToken;

+ (UIViewController *) topViewController;
+ (void)dismissViewController;

+ (NSString *)getImagePathWithName:(nullable NSString *)name ofType:(nullable NSString *)ext;
+ (NSString *)localizationForString:(NSString *)originalText;
+ (void)changeLocalization:(NSString *)localization;

+ (NSString *)getNSUserDefaults:(NSString *)name;
+ (void)setNSUserDefaults:(NSString *)name value:(NSString *)value;

+ (NSString *)formatDate:(NSDate *)date;
+ (NSString *)formatDate:(NSDate *)date withDateFormat:(nullable NSString *)withDateFormat;

+ (long)currentTimeMillis;

+ (void)alertControllerWithTitle:(nullable NSString *)title message:(nullable NSString *)message;
+ (void)alertControllerWithTitle:(nullable NSString *)title message:(nullable NSString *)message handler:(void (^ __nullable)(UIAlertAction *action))handler;
+ (void)alertControllerWithTitle:(nullable NSString *)title message:(nullable NSString *)message actionWithTitle:(nullable NSString *)actionTitle handler:(void (^ __nullable)(UIAlertAction *action))handler;

+ (NSString *)MD5:(NSString *)text;

#pragma mark -  Before login
+ (BOOL)isValidUsername:(NSString *)username;
+ (BOOL)isValidPassword:(NSString *)password;

#pragma mark -  After login
+ (void)onRegisterSuccess;
+ (void)onLoginSuccess;
+ (void)checkProfileValidate;
+ (void)onLogoutSuccess;

#pragma mark -  Terms & Policies Text
+ (NSMutableAttributedString *)termsText;

#pragma mark -  Device Info
+ (NSString*) deviceName;

@end

NS_ASSUME_NONNULL_END
