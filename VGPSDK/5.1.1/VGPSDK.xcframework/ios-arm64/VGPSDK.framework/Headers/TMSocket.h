//
//  TMSocket.h
//  VGPSDK
//
//  Created by Tien Tran on 9/25/25.
//  Copyright © 2025  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SocketRocket/SocketRocket.h>
#import "TMSocketCloseEvent.h"

NS_ASSUME_NONNULL_BEGIN

// Định nghĩa delegate để xử lý các sự kiện WebSocket
@protocol TMSocketDelegate <NSObject>
@optional
- (void)tmSocketDidOpen:(id)sender;
- (void)tmSocket:(id)sender didReceiveMessage:(NSString *)message;
- (void)tmSocket:(id)sender didCloseWithEvent:(nullable TMSocketCloseEvent *)event;
- (void)tmSocket:(id)sender didFailWithError:(NSError *)error;
- (void)tmSocket:(id)sender didAttemptReconnect:(NSInteger)attemptCount;
@end

@interface TMSocket : NSObject <SRWebSocketDelegate>

// Properties
@property (nonatomic, strong) NSString *url;
@property (nonatomic, assign, readonly) BOOL isConnected;
@property (nonatomic, assign) BOOL isPaused;
@property (nonatomic, strong, readonly) NSDictionary *options;
@property (nonatomic, weak, nullable) id<TMSocketDelegate> delegate;

// Khởi tạo
- (instancetype)initWithURL:(NSString *)url options:(nullable NSDictionary *)options;

// Các phương thức public
- (void)initialize;
- (BOOL)send:(id)data;
- (void)close;
- (BOOL)isSocketConnected;

@end

NS_ASSUME_NONNULL_END
