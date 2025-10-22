//
//  VGPLogAPI.h
//  VGPSDK
//
//  Created by  Tien Tran on 3/30/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^VGPLogAPISuccess)(id responseObject);
typedef void (^VGPLogAPIFailure)(NSError *error);

@interface VGPLogAPI : NSObject

+ (void)log:(NSString *_Nonnull)eventName itemID:(NSString *_Nullable)itemID purchaseValue:(NSNumber *_Nullable)money;
+ (void)log:(NSString *_Nonnull)eventName;
@end

NS_ASSUME_NONNULL_END
