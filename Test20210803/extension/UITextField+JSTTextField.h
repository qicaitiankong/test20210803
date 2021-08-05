//
//  UITextField+JSTTextField.h
//  JSTEACHER
//
//  Created by 金石 on 2019/12/24.
//  Copyright © 2019 金石教育-cy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (JSTTextField)

/**
 uitextfield 设置提示文字字体及颜色
 
 @param placeHolder 提示内容
 @param color 颜色
 */

-(void)setPlaceHolder:(NSString *)placeHolder withPlaceHolderColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
