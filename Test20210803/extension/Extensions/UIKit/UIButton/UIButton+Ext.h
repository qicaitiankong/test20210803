//
//  UIButton+Ext.h
//  Excellence
//
//  Created by DaShuMall on 2017/6/19.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIButton+XHQEdgeInsets.h"
#import "UIButton+imagePosit.h"
#import "UIButton+TouchAreaInsets.h"

@interface UIButton (Ext)
@property (nonatomic, assign, getter=isBeingCountdown) BOOL beingCountdown; /**<倒计时中*/
+ (instancetype)xhq_buttonFrame:(CGRect)frame
                      bgColor:(UIColor *)bgColor
                   titleColor:(UIColor *)tColor
                  borderWidth:(CGFloat)bWidth
                  borderColor:(CGColorRef)bColor
                 cornerRadius:(CGFloat)cornerRadius
                          tag:(NSInteger)tag
                       target:(id)vc
                          action:(SEL)action
                        title:(NSString *)title;


+ (instancetype)xhq_buttonWithType:(UIButtonType)btnType
                   backgroundColor:(UIColor*_Nullable)bgColor
                            action:(SEL _Nullable )action
                            target:(id _Nullable )target
                             title:(NSString *_Nullable)title
                             image:(NSString *_Nullable)image
                              font:(CGFloat)font
                         textColor:(UIColor *_Nullable)textColor;

- (CGFloat)calculateButtonWidthWithButton:(UIButton *)button;

/**
 touchUpInside
 */
- (void)xhq_addTarget:(id)target action:(SEL)action;


/**
 开始倒计时
 */
- (void)xhq_startCountDown;

@end

@interface UIButton (XHQFont)

@property (nonatomic, strong) UIFont *xhqFont;

@end
