//
//  VGPFBSDKLoginManager.h
//  VGPSDK
//
//  Created by  Tien Tran on 3/18/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import <FBSDKLoginKit/FBSDKLoginKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VGPFBSDKLoginManager : NSObject

/*!
 @abstract Store class instance.
*/
+ (FBSDKLoginManager *)sharedInstance;

@end

NS_ASSUME_NONNULL_END
