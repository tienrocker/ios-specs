//
//  VGPDeleteAPI.h
//  VGPSDK
//
//  Created by Tien Tran on 6/20/22.
//  Copyright © 2022  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^VGPDeleteAPISuccess)(id responseObject);
typedef void (^VGPDeleteAPIFailure)(NSError *error);

@interface VGPDeleteAPI : NSObject

+ (void)deleteAccount:(VGPDeleteAPISuccess)success failure:(VGPDeleteAPIFailure)failure;

@end

NS_ASSUME_NONNULL_END
