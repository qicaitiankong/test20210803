//
//  UIButton+imagePosit.h
//  Lazy
//
//  Created by DaShuMall on 2018/6/5.
//  Copyright © 2018年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ZYButtonImagePosition) {
    
    ZYButtonImagePositionLeft,
    ZYButtonImagePositionRight,
    ZYButtonImagePositionTop,
    ZYButtonImagePositionBottom
};



@interface UIButton (imagePosit)

/**
 重新摆放按钮的image和label  注意调用时机，按钮的大小确定之后再去调用
 
 @param position 图片的位置
 @param space 图片和文字之间的距离
 */
-(void)placeImageTitlePosition:(ZYButtonImagePosition)position space:(CGFloat)space;

@end
