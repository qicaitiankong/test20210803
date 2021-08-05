//
//  UIView+RoundedCorners.h
//  UIViewRoundedCorners
//
//  Created by Vashishtha Jogi on 11/20/11.
//  Copyright (c) 2011 Vashishtha Jogi. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, UIBorderSideType) {
    UIBorderSideTypeAll  = 0,
    UIBorderSideTypeTop = 1 << 0,
    UIBorderSideTypeBottom = 1 << 1,
    UIBorderSideTypeLeft = 1 << 2,
    UIBorderSideTypeRight = 1 << 3,
};

@interface UIView (RoundedCorners)

-(void)setRoundedCorners:(UIRectCorner)corners radius:(CGFloat)radius;


- (UIView *)borderForColor:(UIColor *)color borderWidth:(CGFloat)borderWidth borderType:(UIBorderSideType)borderType;


@end
