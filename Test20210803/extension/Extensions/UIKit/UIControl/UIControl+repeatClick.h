//
//  UIControl+repeatClick.h
//  TotoroRepayment
//
//  Created by DaShuMall on 2019/4/6.
//  Copyright © 2019年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (repeatClick)

//重复点击
@property (nonatomic, assign) NSTimeInterval cjr_acceptEventInterval;// 可以用这个给重复点击加间隔

@end

NS_ASSUME_NONNULL_END
