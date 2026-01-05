//
//  VGPInterface+Private.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//
//  Private header for internal use by VGPInterface categories

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Private)

// Expose private properties and ivars for use in categories
@property (nonatomic, strong) TMSocket *socket;
@property (nonatomic, strong) NSString *clientId;
@property (nonatomic, assign) BOOL isSocketConnecting;
@property (nonatomic, strong) NSObject *purchaseLock;

// Purchase state ivars (accessed via @synchronized)
- (BOOL)isPurchasing;
- (void)setIsPurchasing:(BOOL)value;
- (NSString *_Nullable)characterIDPurchasing;
- (void)setCharacterIDPurchasing:(NSString *_Nullable)value;
- (NSString *_Nullable)serverIDPurchasing;
- (void)setServerIDPurchasing:(NSString *_Nullable)value;
- (NSString *_Nullable)itemIDPurchasing;
- (void)setItemIDPurchasing:(NSString *_Nullable)value;
- (NSString *_Nullable)iapDataPurchasing;
- (void)setIapDataPurchasing:(NSString *_Nullable)value;

// Socket methods
- (void)joinSocket;
- (void)socketSetup;

@end

NS_ASSUME_NONNULL_END

