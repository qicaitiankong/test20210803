//
//  UIScrollView+Ext.m
//  ShanghaiCard
//
//  Created by DaShuMall on 2018/11/1.
//  Copyright © 2018 DaShuMall. All rights reserved.
//

#import "UIScrollView+Ext.h"

@implementation UIScrollView (Ext)

@end



@implementation UIScrollView (XHQRefresh)

- (void)xhq_refreshHeaderBlock:(dispatch_block_t)block
{
    MJRefreshNormalHeader *header = [MJRefreshNormalHeader headerWithRefreshingBlock:block];
    header.lastUpdatedTimeLabel.hidden = YES;
    //自定义...
    
    [header setTitle:@"下拉刷新" forState:MJRefreshStateIdle];
    [header setTitle:@"松开加载" forState:MJRefreshStatePulling];
    [header setTitle:@"加载中..." forState:MJRefreshStateRefreshing];
    [header setTitle:@"加载中..." forState:MJRefreshStateWillRefresh];
    
    header.stateLabel.font = XHQFont(13);
    header.stateLabel.textColor = [UIColor xhq_content];
    self.mj_header = header;
}

- (void)xhq_refreshFooterBlock:(dispatch_block_t)block
{
//    MJRefreshAutoNormalFooter *footer = [MJRefreshAutoNormalFooter footerWithRefreshingBlock:block];
     MJRefreshBackNormalFooter *footer = [MJRefreshBackNormalFooter footerWithRefreshingBlock:block];
    //自定义...
    
    [footer setTitle:@"上拉加载" forState:MJRefreshStateIdle];
    [footer setTitle:@"松开加载" forState:MJRefreshStatePulling];
    [footer setTitle:@"加载中..." forState:MJRefreshStateRefreshing];
    [footer setTitle:@"加载中..." forState:MJRefreshStateWillRefresh];
    [footer setTitle:@"已加载全部" forState:MJRefreshStateNoMoreData];
    
    footer.stateLabel.font = XHQFont(13);
    footer.stateLabel.textColor = [UIColor xhq_content];
    self.mj_footer = footer;
}

- (void)xhq_stopRefresh
{
    if ([self.mj_header isRefreshing]) {
        [self.mj_header endRefreshing];
    }
    if ([self.mj_footer isRefreshing]) {
        [self.mj_footer endRefreshing];
    }
}

-(void)xhq_footerWithNoMoreData
{
    if ([self.mj_footer isRefreshing]) {
      [self.mj_footer endRefreshingWithNoMoreData];
    }
}

@end
