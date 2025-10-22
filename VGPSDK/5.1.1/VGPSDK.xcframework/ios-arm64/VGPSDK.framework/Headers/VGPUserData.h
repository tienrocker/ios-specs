//
//  VGPUserData.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/6/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VGPHelper.h"

NS_ASSUME_NONNULL_BEGIN

#define VGP_USER_DATE_FORMAT @"yyyy/MM/dd"
#define VGP_USER_TOKEN @"VGP_USER_TOKEN"

@interface VGPUserData : NSObject

+ (void)setUserData:data;
+ (void)clearUserData;

+ (NSString *)getToken;
+ (void)setToken:(nullable NSString *)token;
+ (NSInteger)getUserID;
+ (void)setUserID:(NSInteger)value;
+ (NSString *)getUsername;
+ (void)setUsername:(nullable NSString *)value;
+ (NSString *)getEmail;
+ (void)setEmail:(nullable NSString *)value;
+ (BOOL)getEmailVerified;
+ (void)setEmailVerified:(BOOL)value;
+ (NSString *)getPhone;
+ (void)setPhone:(nullable NSString *)value;
+ (BOOL)getPhoneVerified;
+ (void)setPhoneVerified:(BOOL)value;

+ (NSString *)getAvatar;
+ (void)setAvatar:(nullable NSString *)value;

+ (NSString *)getName;
+ (void)setName:(nullable NSString *)value;
+ (NSString *)getFirstName;
+ (void)setFirstName:(nullable NSString *)value;
+ (NSString *)getMiddleName;
+ (void)setMiddleName:(nullable NSString *)value;
+ (NSString *)getLastName;
+ (void)setLastName:(nullable NSString *)value;

+ (NSInteger)getGender;
+ (void)setGender:(NSInteger)value;
+ (NSString *)getGenderText;
+ (NSDate *)getBirthDay; // format yyyy/MM/dd
+ (void)setBirthDay:(nullable NSString *)value;

+ (NSString *)getPersonalIdentity;
+ (void)setPersonalIdentity:(nullable NSString *)value;
+ (NSDate *)getDateOfIssue;
+ (void)setDateOfIssue:(nullable NSString *)value; // format yyyy/MM/dd
+ (NSString *)getPlaceOfIssue;
+ (void)setPlaceOfIssue:(nullable NSString *)value;

+ (NSString *)getAddress;
+ (void)setAddress:(nullable NSString *)value;
+ (NSString *)getProvider;
+ (void)setProvider:(nullable NSString *)value;

+ (BOOL)getIsConnectGoogle;
+ (void)setIsConnectGoogle:(BOOL)value;
+ (BOOL)getIsConnectFacebook;
+ (void)setIsConnectFacebook:(BOOL)value;
+ (BOOL)getIsConnectQuickplay;
+ (void)setIsConnectQuickplay:(BOOL)value;
+ (BOOL)getIsConnectApple;
+ (void)setIsConnectApple:(BOOL)value;

+ (BOOL)getCanUpdateUsername;
+ (void)setCanUpdateUsername:(BOOL)value;
+ (BOOL)getRequireInitPassword;
+ (void)setRequireInitPassword:(BOOL)value;
+ (BOOL)getShowProtectDialog;
+ (void)setShowProtectDialog:(BOOL)value;
+ (BOOL)getRequireIdentifyInfo;
+ (void)setRequireIdentifyInfo:(BOOL)value;
+ (BOOL)getIsUnderAge;
+ (void)setIsUnderAge:(BOOL)value;
+ (BOOL)getIsPushData;
+ (void)setIsPushData:(BOOL)value;

@end

NS_ASSUME_NONNULL_END
