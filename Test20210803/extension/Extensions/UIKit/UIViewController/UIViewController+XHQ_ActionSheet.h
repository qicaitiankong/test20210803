//
//  UIViewController+XHQ_ActionSheet.h
//  U-Alley
//
//  Created by DaShuMall on 2018/2/28.
//  Copyright © 2018年 DaShuMall. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^XHQSelectedHandler)(NSString *selectedValue);
@interface UIViewController (XHQ_ActionSheet)

/**
 默认返回标题为'取消'的actionSheet
 */
- (void)xhq_defalutCancelActionSheetTitle:(NSString *)aTitle
                                  message:(NSString *)aMsg
                               dataSource:(NSArray<NSString *> *)datas
                          selectedHandler:(XHQSelectedHandler)handler;

/**
 actionSheet
 */
- (void)xhq_actionSheetTitle:(NSString *)aTitle
                     message:(NSString *)aMsg
                 cancelTitle:(NSString *)aCancel
                  dataSource:(NSArray<NSString *> *)datas
             selectedHandler:(XHQSelectedHandler)handler;


@end
