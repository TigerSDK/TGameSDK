//
//  UserCenterViewController.h
//  TGameFramework
//
//  Created by TWTech1 on 15-3-16.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TGameFramework/TGameSDK.h>

#import <TalentFramework/CommandCenter.h>
//#import <FBSDKShareKit/FBSDKShareKit.h>
//#import <FBSDKCoreKit/FBSDKCoreKit.h>

@interface UserCenterViewController : UIViewController<CommandDelegate,UIWebViewDelegate>


//@property (nonatomic,retain) IBOutlet UILabel *glabel;
@property (nonatomic,retain) UIButton *gclose;
@property (nonatomic,retain) UIButton *gback;
//@property (nonatomic,retain) IBOutlet UIImageView *gimageview;
@property (nonatomic,retain) TGWebView *webView;
+(UserCenterViewController *)instance;
+(UserCenterViewController *)getInstance;
-(void)UserCenterViewControllerExample;
@end
