//
//  VGPInterface+IAP.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (IAP)

#pragma mark - IAP Notification Handlers
- (void)IAPHelperProductPurchasedNotification:(NSNotification *)notification;
- (void)IAPHelperProductPurchasedFailNotification:(NSNotification *)notification;

@end

NS_ASSUME_NONNULL_END

