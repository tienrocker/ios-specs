//
//  VGPInterface+Adjust.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Adjust)

#pragma mark - Adjust Delegate Methods
- (void)adjustAttributionChanged:(ADJAttribution *)attribution;
- (void)adjustSessionTrackingSucceeded:(ADJSessionSuccess *)sessionSuccessResponseData;
- (void)adjustSessionTrackingFailed:(ADJSessionFailure *)sessionFailureResponseData;
- (void)onLog:(nonnull NSString *)logInfo;

@end

NS_ASSUME_NONNULL_END

