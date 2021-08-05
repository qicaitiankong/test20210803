//
//  UILabel+Ext.m
//  Excellence
//
//  Created by DaShuMall on 2017/6/19.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import "UILabel+Ext.h"
#import <objc/runtime.h>

@implementation UILabel (Ext)

+ (instancetype)xhq_layoutColor:(UIColor *)color
                           font:(UIFont *)font
                           text:(NSString *)text textAlignment:(NSInteger)textAlignment{
    return [self xhq_labelFrame:CGRectZero
                        bgColor:[UIColor clearColor]
                      textColor:color
                  textAlignment:textAlignment
                           font:font
                           text:text];
}

+ (instancetype)xhq_labelFrame:(CGRect)frame
                       bgColor:(UIColor *)bgColor
                     textColor:(UIColor *)tColor
                 textAlignment:(NSTextAlignment)alignment
                          font:(UIFont *)font
                          text:(NSString *)text {
    return ({
        UILabel *label = [[UILabel alloc]initWithFrame:frame];
        label.textColor = tColor;
        label.backgroundColor = bgColor;
        label.textAlignment = alignment;
        label.font = font;
        label.text = text;
        label;
    });
}

+ (instancetype)xhq_lineLabel {
    return ({
        UILabel *label = [[UILabel alloc]init];
        label.backgroundColor = [UIColor xhq_line];
        label;
    });
}

+ (void)changeStringWithString:(NSString *)string font:(UIFont *)font changeStr:(NSString *)changeStr label:(UILabel *)label changeColor:(UIColor *)color {
    NSMutableAttributedString *aString = [[NSMutableAttributedString alloc]initWithString:string];
    [aString addAttribute:NSFontAttributeName value:font range:[string rangeOfString:changeStr]];
    [aString addAttribute:NSForegroundColorAttributeName value:color range:[string rangeOfString:changeStr]];
    label.attributedText = aString;
}
@end
