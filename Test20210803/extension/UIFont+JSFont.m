//
//  UIFont+JSFont.m
//  JSEDU
//
//  Created by 金石 on 2018/5/8.
//  Copyright © 2018年 孔祥刚. All rights reserved.
//

#import "UIFont+JSFont.h"

@implementation UIFont (JSFont)

/**
 自定义的字体

 @param size 字体大小
 @return 字体
 */
+ (UIFont *)jsFontWithSize:(CGFloat)size {
//    return [UIFont fontWithName:@"PingFangSC-Regular" size:size];
    return [UIFont systemFontOfSize:size];
}


/**
 字体适配，当文字实在不好看的时候，用这个方法，不用上面的

 @param size 字体大小
 @return 字体
 */
+ (UIFont *)adjustFontWithSize:(CGFloat)size {
    if (SCREEN_HEIGHT > 667) {
        size = size + 2;
    }
    return [self jsFontWithSize:size];
}

+ (UIFont*)getFZLTDGBKFont:(CGFloat)fontSize{
    return  [UIFont fontWithName:@"FZLTDHK--GBK1-0" size:fontSize];
}
#pragma mark 平方字体大小
+ (UIFont *)getPingFangRegularFont:(CGFloat)size {
    return [UIFont fontWithName:@"PingFangSC-Regular" size:size];
}
+ (UIFont *)getBoldPingFangRegularFont:(CGFloat)size {
    return [UIFont fontWithName:@"PingFangSC-Regular-Bold" size:size];
}
+ (UIFont *)getDINCondensedCFont:(CGFloat)size{
    for (NSString *fontName in [UIFont familyNames]) {
        if ([fontName isEqualToString:@"DINCondensedC"]) {
            return [UIFont fontWithName:@"DINCondensedC" size:size];
        }
    }
    return [UIFont jsFontWithSize:size];
}
@end
