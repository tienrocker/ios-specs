//
//  VGPDeviceData.h
//  VGPSDK
//
//  Created by  Tien Tran on 3/12/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VGPHelper.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPDeviceData : NSObject

+ (NSString *)getDeviceId;
+ (NSString *)getCampaign;
+ (void)setCampaign:(NSString *)value;
+ (NSString *)getSourceID;
+ (void)setSourceID:(NSString *)value;

/**
 @todo: init socket push log
 */
+ (BOOL)getIsSocketPushLog;
+ (void)setIsSocketPushLog:(BOOL)value;

@end

NS_ASSUME_NONNULL_END
