//
//  VGPInterface+Socket.h
//  VGPSDK
//
//  Created by  Tien Tran on 2/3/20.
//  Copyright © 2020  Tien Tran. All rights reserved.
//

#import "VGPInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface VGPInterface (Socket)

#pragma mark - Socket Management
- (NSString *)socketURL;
- (void)socketSetup;
- (void)appWillEnterForeground:(NSNotification *)notification;
- (void)appDidEnterBackground:(NSNotification *)notification;

#pragma mark - TMSocketDelegate
- (void)tmSocketDidOpen:(id _Nonnull)sender;
- (void)tmSocket:(id _Nonnull)sender didReceiveMessage:(NSString *_Nonnull)message;
- (void)tmSocket:(id _Nonnull)sender didCloseWithEvent:(TMSocketCloseEvent *_Nullable)event;
- (void)tmSocket:(id _Nonnull)sender didFailWithError:(NSError *_Nonnull)error;
- (void)tmSocket:(id _Nonnull)sender didAttemptReconnect:(NSInteger)attemptCount;

#pragma mark - Socket Private Methods
- (void)joinSocket;
- (void)processMessage:(NSString *)message;

@end

NS_ASSUME_NONNULL_END

