//
//  VGPInterface+Marketing.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Marketing)

#pragma mark - Marketing Events
- (void)setGameVersion:(NSString*_Nonnull)code;
- (void)setGameCode:(NSString*_Nonnull)code;

- (void)logJoinServer:(NSString*_Nonnull)serverID setCharacterID:(NSString*_Nonnull)characterID;
- (void)logCreatedCharacter;
- (void)logLevelUp:(int) level;

// PAYMENT FORM
- (void)logOpenPaymentScreen;
- (void)logPurchase:(int) money setItemID:(NSString*_Nonnull)itemID;

// DOWNLOAD RESOURCE
- (void)logStartDownloadResource;
- (void)logDownloadResourcePercent:(int)percent;
- (void)logDownloadResourceSuccess;
- (void)logDownloadResourceFail;

// EXTRACT RESOURCE
- (void)logStartExtractResource;
- (void)logExtractResourceSuccess;
- (void)logExtractResourceFail;

// GAME VERSION
- (void)logStartCheckGameVersionClient;
- (void)logCheckGameVersionClientSuccess;
- (void)logCheckGameVersionClientFail;

// SERVER LIST
- (void)logStartGetGameServerList;
- (void)logGetGameServerListSuccess;
- (void)logGetGameServerListFail;

// SERVER CONFIG
- (void)logStartGetServerConfig;
- (void)logGetServerConfigSuccess;
- (void)logGetServerConfigFail;

- (void)shareFacebookImage:(NSString *_Nonnull)url;
- (void)shareFacebookImageLocal:(UIImage *_Nonnull)image;

@end

NS_ASSUME_NONNULL_END

