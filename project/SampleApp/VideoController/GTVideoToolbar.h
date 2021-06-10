//
//  GTVideoToolbar.h
//  SampleApp
//
//  Created by zheguo on 2020.
//  Copyright © 2020 zheguo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTScreen.h"

#define GTVideoToolbarHeight UI(60)

/**
 视频ViewController Item下的Toolbar
 */
@interface GTVideoToolbar : UIView

/**
 根据数据布局Toolbar
 */
- (void)layoutWithModel:(id)model;

@end