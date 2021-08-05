//
//  UIButton+TouchAreaInsets.h
//  TotoroRepayment
//
//  Created by DaShuMall on 2019/3/28.
//  Copyright © 2019年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (JLUtils)
/**
 *  @brief  设置按钮额外热区
 */
@property (nonatomic, assign) UIEdgeInsets touchAreaInsets;

@end

NS_ASSUME_NONNULL_END
