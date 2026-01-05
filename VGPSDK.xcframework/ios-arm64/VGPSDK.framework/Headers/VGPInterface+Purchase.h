//
//  VGPInterface+Purchase.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Purchase)

#pragma mark - Purchase Management
- (void)purchase:(NSString *_Nonnull)characterID serverID:(NSString *_Nonnull)serverID itemID:(NSString *_Nonnull)itemID andIAPData:(NSString *_Nullable)iapData;

@end

NS_ASSUME_NONNULL_END

