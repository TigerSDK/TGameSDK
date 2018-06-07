//
//  TGameSDKFireBaseFCM.h
//  TGameSDKFireBaseFCM
//
//  Created by TW-C-060 on 2018/5/14.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>


/**初始配置*/
static NSString *const TGameSDKFireBaseFCMConfigureWithApplication = @"tg://fireBaseFCM/configureWithApplication";

/**设置APNSToken
 *==参数APNSToken
 */
static NSString *const TGameSDKFireBaseFCMSetAPNSToken = @"tg://fireBaseFCM/setAPNSToken";

/**设置主题
 *==参数topic
 */
static NSString *const TGameSDKFireBaseFCMSubscribeToTopic = @"tg://fireBaseFCM/subscribeToTopic";

/**设置信息
 *==参数message
 */
static NSString *const TGameSDKFireBaseFCMAppDidReceiveMessage = @"tg://fireBaseFCM/appDidReceiveMessage";

@interface TGameSDKFireBaseFCM : NSObject

+(TGameSDKFireBaseFCM *)instance;

@end

