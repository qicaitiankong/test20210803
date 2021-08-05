//
//  UITableView+Ext.m
//  Excellence
//
//  Created by DaShuMall on 2017/6/16.
//  Copyright © 2017年 DaShuMall. All rights reserved.
//

#import "UITableView+Ext.h"

@implementation UITableView (Ext)

- (void)xhq_registerCell:(Class _Nullable )cellClass {
    [self registerClass:cellClass forCellReuseIdentifier:NSStringFromClass(cellClass)];
}

- (void)xhq_registerView:(Class _Nullable )viewClass {
    [self registerClass:viewClass forHeaderFooterViewReuseIdentifier:NSStringFromClass(viewClass)];
}

- (UITableViewCell *)xhq_dequeueCell:(Class)cellClass indexPath:(NSIndexPath *)indexPath {
    return [self dequeueReusableCellWithIdentifier:NSStringFromClass([cellClass class]) forIndexPath:indexPath];
}

- (UITableViewHeaderFooterView *)xhq_dequeueView:(Class)viewClass {
    return [self dequeueReusableHeaderFooterViewWithIdentifier:NSStringFromClass(viewClass)];
}

@end
