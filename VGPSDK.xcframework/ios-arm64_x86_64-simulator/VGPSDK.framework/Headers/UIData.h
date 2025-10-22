//
//  UIData.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/6/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VGPHelper.h"
#import "VGPConfig.h"

NS_ASSUME_NONNULL_BEGIN

#define VGP_LOCALIZATION @"VGP_LOCALIZATION"

@interface UIData : NSObject

#pragma mark -  LANG
+ (NSString *)getLocalization;
+ (void)setLocalization:(NSString *)localization;

#pragma mark -  String
/**
 @todo: link help
 */
+ (NSString *)getTermOfUsePath;
+ (void)setTermOfUsePath:(NSString *)value;
/**
 @todo: show quên mật khẩu
 */
+ (BOOL)getIsShowFotgotPassword;
+ (void)setIsShowFotgotPassword:(BOOL)value;
/**
 @todo: show nhập chứng minh nhân dân etc... (remove đối với bản global)
 */
+ (BOOL)getIsHideUpdatePersonalVietnam;
+ (void)setIsHideUpdatePersonalVietnam:(BOOL)value;
/**
 @todo: show phone
 */
+ (BOOL)getIsShowPhone;
+ (void)setIsShowPhone:(BOOL)value;
/**
@todo: dùng khi người dùng đã xác thực số điện thoại nhưng muốn đổi
*/
+ (NSString *)getPhoneChangeAlertMessage;
+ (void)setPhoneChangeAlertMessage:(NSString *)message;
/**
@todo: dùng khi người dùng muốn lấy nội dung sms để xác thực điện thoại
*/
+ (NSString *)getForgotPasswordPath;
+ (void)setForgotPasswordPath:(NSString *)value;
/**
@todo: dùng khi người dùng cập nhật thông tin cá nhân
*/
+ (NSString *)getInfoPath;
+ (void)setInfoPath:(NSString *)value;

@end

NS_ASSUME_NONNULL_END
