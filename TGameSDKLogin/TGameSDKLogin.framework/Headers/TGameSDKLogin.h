//
//  TGameSDKLogin.h
//  TGameSDKLogin
//
//  Created by TW-C-060 on 2018/3/27.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TGameSDKLogin/LoginLogic.h>
#import <TGameSDKLogin/TGLoginViewController.h>
#import <TGameSDKLogin/UserCenterViewController.h>

/**登录初始化*/
static NSString *const TGameSDKLoginInit = @"tg://login/init";
/**用户登录*/
static NSString *const TGameSDKLoginDoLogin = @"tg://login/doLogin";
/**用户登出*/
static NSString *const TGameSDKLoginDoLogout = @"tg://login/doLogout";
/**用户中心*/
static NSString *const TGameSDKLoginUserCenter = @"tg://login/userCenter";
/*
 *向悬浮框显示数组 中添加项，例如添加广告项
 *各个项 的对应如下：
 *0 用户中心 = 个人
 *1 公告
 *2 客服
 *3 粉丝页
 *4 论坛
 *5 推荐游戏
 *6 注销 = 退出
 *@param index
 *@return NSArray
 */
static NSString *const TGameSDKLoginFloatAddTheShowedIndex = @"tg://login/floatAddTheShowedIndex";
/**下载Images*/
static NSString *const TGameSDKLoginDownloadsImages = @"tg://login/downloadsImages";


@interface TGameSDKLogin : NSObject


/**
 HellowBar展示，目前用于Facebook管理类

 @param nickname nickname description
 */
+ (void)helloBarShow:(NSString *)nickname;

@end
