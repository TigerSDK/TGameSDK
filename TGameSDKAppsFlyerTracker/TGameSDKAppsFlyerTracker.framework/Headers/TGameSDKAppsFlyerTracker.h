//
//  TGameSDKAppsFlyerTracker.h
//  TGameSDKAppsFlyerTracker
//
//  Created by TW-C-060 on 2018/4/12.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>


/**支付
 *
 *@param sappsflyerDevKey
 *@param sappleAppID
 */
static NSString *const TGameSDKAppsFlyerTrackerDidFinishLaunchingWithOptions = @"tg://login/AppsFlyerTracker/didFinishLaunchingWithOptions";

/**
 */
static NSString *const TGameSDKAppsFlyerTrackerTrackAppLaunch = @"tg://login/AppsFlyerTracker/trackAppLaunch";

/**
 *
 *@param trackEvent
 *@param withValue
 */
static NSString *const TGameSDKAppsFlyerTrackerTrackEventWithValue = @"tg://login/AppsFlyerTracker/trackEvent";



@interface TGameSDKAppsFlyerTracker : NSObject 


@end

