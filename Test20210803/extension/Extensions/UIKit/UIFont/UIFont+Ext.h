//
//  UIFont+Ext.h
//  Excellence
//
//  Created by DaShuMall on 2017/6/19.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>


static inline UIFont *XHQFont(CGFloat size) {
    return [UIFont fontWithName:@"MicrosoftYaHei" size:size];
//    return [UIFont systemFontOfSize:size];
}

static inline UIFont *XHQMediumFont(CGFloat size) {
//    return [UIFont boldSystemFontOfSize:size];
    
    return [UIFont fontWithName:@"PingFangSC-Medium" size:size];
}



@interface UIFont (Ext)

+ (instancetype)xhq_font18;
+ (instancetype)xhq_font17;
+ (instancetype)xhq_font16;
+ (instancetype)xhq_font15;
+ (instancetype)xhq_font14;
+ (instancetype)xhq_font13;
+ (instancetype)xhq_font12;
+ (instancetype)xhq_font10;
+ (instancetype)xhq_font8;

@end
