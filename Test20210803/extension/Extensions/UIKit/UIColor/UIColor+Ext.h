//
//  UIColor+Ext.h
//  Excellence
//
//  Created by DaShuMall on 2017/6/16.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>


/** 16进制颜色 */
static inline UIColor *XHQHexColor(NSUInteger hexValue) {
    return [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:1.0];
}

/** RGBA颜色 */
static inline UIColor *XHQRGBA(float r, float g, float b, float a) {
    return [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a];
}

/** RGBA颜色 */
static inline UIColor *XHQRGB(float r, float g, float b) {
    return XHQRGBA(r, g, b, 1);
}


static const NSUInteger COLOR_VALUE_BACKGROUND = 0xF0F0F0; /**<背景色*/
static const NSUInteger COLOR_VALUE_BASE = 0x000000;
static const NSUInteger COLOR_VALUE_ORANGE = 0xFF8534;  /**<橙色调-字体*/
static const NSUInteger COLOR_VALUE_ORANGE_BG = 0xFFECE0;  /**<橙色调-button背景*/
static const NSUInteger COLOR_VALUE_RED = 0xFF4949;  /**<红色调*/
static const NSUInteger COLOR_VALUE_BLUE = 0x246EEF; /**<蓝色调*/
static const NSUInteger COLOR_VALUE_BLUE_BG = 0xE5EDFB; /**<蓝色调(背景)*/
static const NSUInteger COLOR_VALUE_LINE = 0xDDDDDD;  /**<线的颜色*/
static const NSUInteger COLOR_VALUE_TITLE = 0x333333;  /**<标题颜色*/
static const NSUInteger COLOR_VALUE_CONTENT = 0x666666;  /**<内容*/
static const NSUInteger COLOR_VALUE_ASSIST = 0x999999;  /**<辅助色（时间、数量、点赞等字体颜色）*/
static const NSUInteger COLOR_VALUE_SECTION = 0xF0F0F0;  /**<分区色*/
static const NSUInteger COLOR_VALUE_WHITE = 0xFFFFFF;  /**<红色调*/

static const NSUInteger COLOR_VALUE_BLACK = 0x1B1E26;


@interface UIColor (Ext)


+ (instancetype)xhq_base;
+ (instancetype)xhq_background;
+ (instancetype)xhq_orange;
+ (instancetype)xhq_orange_bg;
+ (instancetype)xhq_red;
+ (instancetype)xhq_blue;
+ (instancetype)xhq_blue_bg;
+ (instancetype)xhq_line;
+ (instancetype)xhq_aTitle;
+ (instancetype)xhq_content;
+ (instancetype)xhq_assist;
+ (instancetype)xhq_section;
+ (instancetype)xhq_randorm;
+ (instancetype)xhq_white;
+ (instancetype)xhq_black;

+ (instancetype)xhq_base_golden;

+ (instancetype)xhq_colorFromHexString:(NSString *)hexStr;

@end
