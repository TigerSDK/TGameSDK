//
//  TGameSDKLoginVK.h
//  TGameSDKLoginVK
//
//  Created by TW-C-060 on 2018/4/9.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

/**processOpenURL
 *
 *@param url
 *@param sourceApplication
 */
static NSString *const TGameSDKLoginVKProcessOpenURL = @"tg://login/vk/processOpenURL";

/**VK分享
 *
 *@param text
 *@param uploadImages
 *@param linkTitle
 *@param linkUrl
 */
static NSString *const TGameSDKLoginVKShare = @"tg://login/vk/share";

/**VK自动登录*/
static NSString *const TGameSDKLoginVKForVKAutoLogin = @"tg://login/vk/forVKAutoLogin";

/**VK注销*/
static NSString *const TGameSDKLoginVKForceLogout = @"tg://login/vk/forceLogout";

/**VK登录*/
static NSString *const TGameSDKLoginVKLogin = @"tg://login/vk/login";


@interface TGameSDKLoginVK : NSObject

@end
