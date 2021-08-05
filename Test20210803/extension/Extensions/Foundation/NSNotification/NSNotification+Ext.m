//
//  NSNotification+Ext.m
//  Julong
//
//  Created by DaShuMall on 2017/7/24.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import "NSNotification+Ext.h"

@implementation NSNotification (Ext)

- (BOOL)xhq_isNotification:(NSNotificationName)notification {
    return [self.name isEqualToString:notification];
}

@end
