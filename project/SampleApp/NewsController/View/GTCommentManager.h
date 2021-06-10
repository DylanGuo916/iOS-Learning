//
//  GTCommentManager.h
//  SampleApp
//
//  Created by zheguo on 2020.
//  Copyright © 2020 zheguo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GTCommentManager : NSObject

+ (GTCommentManager *)sharedManager;

- (void)showCommentView;

@end

NS_ASSUME_NONNULL_END
