//
//  TGLoginViewController.h
//  TGameFramework
//
//  Created by caoyuan on 2017/8/7.
//  Copyright © 2017年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TalentFramework/Command.h>
#import <TalentFramework/CommandCenter.h>

@interface TGLoginViewController : UIViewController<CommandDelegate>

@property (nonatomic,strong) NSString     *findPwNameText;
@property (nonatomic,strong) UITextField  *nameTf;

+(TGLoginViewController *)instance;
+(TGLoginViewController *)getInstance;
-(void)removeSelf;

@end
