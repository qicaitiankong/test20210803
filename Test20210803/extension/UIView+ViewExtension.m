//
//  UIView+ViewExtension.m
//  hemuversion
//
//  Created by wanshiMac on 2021/6/23.
//

#import "UIView+ViewExtension.h"

@implementation UIView (ViewExtension)

- (void)setGradientLayerWithColors:(NSArray *)colors locations:(NSArray *)locations startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint frame:(CGRect)frame {
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.frame = frame;
    gradientLayer.colors = colors;
    gradientLayer.locations = locations;
    gradientLayer.startPoint = startPoint;
    gradientLayer.endPoint = endPoint;
    [self.layer addSublayer:gradientLayer];
}

@end
