//
//  UIButton+Ext.m
//  Excellence
//
//  Created by DaShuMall on 2017/6/19.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import "UIButton+Ext.h"
#import <objc/runtime.h>

@implementation UIButton (Ext)

+ (instancetype)xhq_buttonFrame:(CGRect)frame
                        bgColor:(UIColor *)bgColor
                     titleColor:(UIColor *)tColor
                    borderWidth:(CGFloat)bWidth
                    borderColor:(CGColorRef)bColor
                   cornerRadius:(CGFloat)cornerRadius
                            tag:(NSInteger)tag
                         target:(id)vc
                         action:(SEL)action
                          title:(NSString *)title {
    return ({
        UIButton * button = [UIButton buttonWithType:UIButtonTypeCustom];
        button.frame               = frame;
        if (bgColor) {
            button.backgroundColor     = bgColor;
        }
        if (title) {
            [button setTitle:title forState:UIControlStateNormal];
        }
        if (tColor) {
            [button setTitleColor:tColor forState:UIControlStateNormal];
        }
        if (tag >=0) {
            button.tag                 = tag;
        }
        if (action) {
            [button addTarget:vc action:action forControlEvents:UIControlEventTouchUpInside];
        }
        if (bColor) {
            button.layer.masksToBounds = YES;
            button.layer.borderWidth   = bWidth;
            button.layer.borderColor   = bColor;
        }
        if (bWidth) {
            
        }
        if (cornerRadius) {
            button.layer.masksToBounds = YES;
            button.layer.cornerRadius  = cornerRadius;
        }
        button;
    });
}

+(instancetype)xhq_buttonWithType:(UIButtonType)btnType
                  backgroundColor:(UIColor *)bgColor
                           action:(SEL)action
                           target:(id)target
                            title:(NSString *)title
                            image:(NSString *)image
                             font:(CGFloat)font
                        textColor:(UIColor *)textColor
{
    
    UIButton *btn = [UIButton buttonWithType:btnType];
    if (font) {
        btn.titleLabel.font = FONTNAMESIZE(font, @"MicrosoftYaHei");
    }
    if (title) {
        [btn setTitle:title forState:(UIControlStateNormal)];
    }
    if (textColor) {
        [btn setTitleColor:textColor forState:UIControlStateNormal];
    }
    if (image) {
        [btn setImage:[UIImage imageNamed:image] forState:(UIControlStateNormal)];
    }
    if (bgColor) {
        [btn setBackgroundColor:bgColor];
    }
    if (target && action) {
        [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    }
    return btn;
}

- (void)xhq_addTarget:(id)target action:(SEL)action {
    [self addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
}

-(void)xhq_startCountDown
{
//    @weakify(self);
//    static const NSInteger totalTime = 60;
//    self.time = 59;
////    @weakify(beingCountdown);
//    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, dispatch_get_main_queue());
//    dispatch_source_set_timer(timer, DISPATCH_TIME_NOW, 1 * NSEC_PER_SEC, 0 * NSEC_PER_SEC);
//    dispatch_source_set_event_handler(timer, ^{
//        @strongify(self);
////        @strongify(_beingCountdown);
//        if (self.time <= 1) {
//            self.beingCountdown = NO;
//            dispatch_source_cancel(timer);
//            self.enabled = YES;
//            [ self setTitle:DYButtonCodeText forState:UIControlStateNormal];
//            self.time = totalTime;
//        }else {
//            self.time -- ;
//            self.beingCountdown = YES;
//            self.enabled = NO;
//            NSString * str = [NSString stringWithFormat:@"|  剩余%ldS",self.time];
//            [ self setTitle:str forState:UIControlStateNormal];
//        }
//    });
//    dispatch_resume(timer);
    __block int timeout=59;
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_source_t _timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0,queue);
    dispatch_source_set_timer(_timer,dispatch_walltime(NULL, 0),1.0*NSEC_PER_SEC, 0); //每秒执行
    dispatch_source_set_event_handler(_timer, ^{
//        self.beingCountdown = NO;
//        if (self.beingCountdown) {
            if(timeout<=0){ //倒计时结束，关闭
                dispatch_source_cancel(_timer);
                dispatch_async(dispatch_get_main_queue(), ^{
                    [self setTitle:@"重新发送" forState:UIControlStateNormal];
                    self.userInteractionEnabled = YES;
                });
            }else{
                // int minutes = timeout / 60;
                int seconds = timeout % 60;
                NSString *strTime = [NSString stringWithFormat:@"%.2d", seconds];
                dispatch_async(dispatch_get_main_queue(), ^{
                    [self setTitle:[NSString stringWithFormat:@"剩余%@秒",strTime] forState:UIControlStateNormal];
                    self.userInteractionEnabled = NO;
                });
                timeout--;
            }
        });
//                                      else{
//            dispatch_source_cancel(_timer);
//            dispatch_async(dispatch_get_main_queue(), ^{
//                [self setTitle:@"|  获取验证码" forState:UIControlStateNormal];
//                self.userInteractionEnabled = YES;
//            });
//        }
        dispatch_resume(_timer);
}


- (CGFloat)calculateButtonWidthWithButton:(UIButton *)button{
    NSString *content = button.titleLabel.text;
    UIFont *font = button.titleLabel.font;
    CGSize size = CGSizeMake(MAXFLOAT, 100.0f);
    CGSize buttonSize = [content boundingRectWithSize:size
                                              options:NSStringDrawingTruncatesLastVisibleLine  | NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                           attributes:@{ NSFontAttributeName:font}
                                              context:nil].size;
    return buttonSize.width;
}

@end


static const char *xhq_FontKey = "xhq_FontKey";

@implementation UIButton (XHQFont)

- (UIFont *)xhqFont {
    return objc_getAssociatedObject(self, xhq_FontKey);
}

- (void)setXhqFont:(UIFont *)xhqFont {
    objc_setAssociatedObject(self, xhq_FontKey, xhqFont, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    self.titleLabel.font = xhqFont;
}

@end
