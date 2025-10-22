//
//  TMSocketCloseEvent.h
//  VGPSDK
//
//  Created by Tien Tran on 9/25/25.
//  Copyright © 2025  Tien Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TMSocketCloseEvent : NSObject

@property (nonatomic, readonly) NSInteger code;
@property (nonatomic, copy, readonly, nullable) NSString *reason;
@property (nonatomic, readonly) BOOL wasClean;

- (instancetype)initWithCode:(NSInteger)code reason:(nullable NSString *)reason wasClean:(BOOL)wasClean;

@end

NS_ASSUME_NONNULL_END
