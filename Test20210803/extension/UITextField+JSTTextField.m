//
//  UITextField+JSTTextField.m
//  JSTEACHER
//
//  Created by 金石 on 2019/12/24.
//  Copyright © 2019 金石教育-cy. All rights reserved.
//

#import "UITextField+JSTTextField.h"

@implementation UITextField (JSTTextField)

-(void)setPlaceHolder:(NSString *)placeHolder withPlaceHolderColor:(UIColor *)color
{
    if ([placeHolder isKindOfClass:[NSString class]])
    {
        NSMutableAttributedString *attributeString = [[NSMutableAttributedString alloc]initWithString:placeHolder];
        [attributeString addAttribute:NSForegroundColorAttributeName value:color range:NSMakeRange(0, placeHolder.length)];
        [self setAttributedPlaceholder:attributeString];
    }
}


@end
