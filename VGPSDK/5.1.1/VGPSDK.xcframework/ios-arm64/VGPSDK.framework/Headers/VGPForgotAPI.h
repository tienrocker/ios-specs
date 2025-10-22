//
//  VGPForgotAPI.h
//  VGPSDK
//
//  Created by  Tien Tran on 4/4/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^VGPForgotAPISuccess)(id responseObject);
typedef void (^VGPForgotAPIFailure)(NSError *error);

@interface VGPForgotAPI : NSObject

+ (void)forgotEmail:(NSString *)email success:(VGPForgotAPISuccess)success failure:(VGPForgotAPIFailure)failure;

@end

NS_ASSUME_NONNULL_END
