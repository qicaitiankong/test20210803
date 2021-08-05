//
//  UIScrollView+Ext.h
//  ShanghaiCard
//
//  Created by DaShuMall on 2018/11/1.
//  Copyright © 2018 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView (Ext)

@end

NS_ASSUME_NONNULL_END


NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView (XHQRefresh)

- (void)xhq_refreshHeaderBlock:(dispatch_block_t)block;

- (void)xhq_refreshFooterBlock:(dispatch_block_t)block;

- (void)xhq_stopRefresh;

- (void)xhq_footerWithNoMoreData;

@end

NS_ASSUME_NONNULL_END
