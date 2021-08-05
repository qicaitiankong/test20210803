//
//  UIDevice+ReboDevice.h
//  robo
//
//  Created by Mac on 2018/7/31.
//

#import <UIKit/UIKit.h>

@interface UIDevice (ReboDevice)
/**
 * @interfaceOrientation 输入要强制转屏的方向
 */
+ (void)switchNewOrientation:(UIInterfaceOrientation)interfaceOrientation;
@end
