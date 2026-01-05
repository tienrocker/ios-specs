//
//  VGPInterface+Account.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Account)

#pragma mark - Account Management
- (void)loginGame;
- (void)loginGame:(void (^ __nullable)(void))completion;
- (void)logoutGame;
- (void)logoutGame:(void (^ __nullable)(void))completion;
- (void)showProfile;
- (void)showProfile:(void (^ __nullable)(void))completion;
- (void)deleteAccount;

@end

NS_ASSUME_NONNULL_END

