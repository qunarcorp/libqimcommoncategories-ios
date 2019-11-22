//
//  UIApplication+STIMApplication.h
//  STIMCommonCategories
//
//  Created by 李露 on 2018/9/16.
//  Copyright © 2018年 STIM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (STIMApplication)

- (UIWindow *)mainWindow;

- (UINavigationController *)visibleNavigationController;

- (UIViewController *)visibleViewController;

//逐层遍历，获取当前所在控制器
- (UIViewController *)getVisibleViewControllerFrom:(UIViewController *)vc;

@end
