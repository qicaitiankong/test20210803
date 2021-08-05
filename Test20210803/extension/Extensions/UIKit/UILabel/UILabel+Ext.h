//
//  UILabel+Ext.h
//  Excellence
//
//  Created by DaShuMall on 2017/6/19.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UILabel+XHQAttributed.h"

@interface UILabel (Ext)

+ (instancetype)xhq_layoutColor:(UIColor *)color
                           font:(UIFont *)font
                           text:(NSString *)text textAlignment:(NSInteger)textAlignment;

+ (instancetype)xhq_labelFrame:(CGRect)frame
                       bgColor:(UIColor *)bgColor
                     textColor:(UIColor *)tColor
                 textAlignment:(NSTextAlignment)alignment
                          font:(UIFont *)font
                          text:(NSString *)text;

+ (instancetype)xhq_lineLabel;

+ (void)changeStringWithString:(NSString *)string font:(UIFont *)font changeStr:(NSString *)changeStr label:(UILabel *)label changeColor:(UIColor *)color ;
@end

