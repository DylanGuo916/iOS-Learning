//
//  GTNotification.h
//  SampleApp
//
//  Created by zheguo on 2020.
//  Copyright © 2020 zheguo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 APP 推送管理
 */
@interface GTNotification : NSObject

+ (GTNotification *)notificationManager;

- (void)checkNotificationAuthorization;

@end

NS_ASSUME_NONNULL_END
