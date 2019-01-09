//
//  TGameSDKPay.h
//  TGameSDKPay
//
//  Created by TW-C-060 on 2018/4/10.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

/**支付
 *
 *@param productId
 *@param buyNum
 *@param realPrice
 *@param productName
 *@param extInfo
 *@param notifyUrl
 */
static NSString *const TGameSDKPayDoPayment = @"tg://login/pay/doPayment";

/**App支付
 *
 *@param productId
 *@param buyNum
 *@param realPrice
 *@param productName
 *@param extInfo
 *@param notifyUrl
 */
static NSString *const TGameSDKPayDoAppPayment = @"tg://login/pay/doAppPayment";

/**检查是否有掉单情况
 *
 */
static NSString *const TGameSDKPayCheckTrans = @"tg://login/pay/checkTrans";


@interface TGameSDKPay : NSObject

@end
