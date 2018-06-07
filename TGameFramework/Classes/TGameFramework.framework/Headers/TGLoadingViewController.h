//
//  TGLoadingViewController.h
//  newtry
//
//  Created by TWTech1 on 15-5-30.
//  Copyright (c) 2015年 TWTech1. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    LoadingViewFrameEqualToMyself = 0,              //loading view has its own size
    LoadingViewFrameEqualToSuperView,   //loading view frame = its super view frame
    LoadingViewFrameEqualToScreenView   //loading view always = screen frame
}LoadingViewFrameType;

@protocol TGLoadingCloseDelegate <NSObject>

-(void)closeLoadingViewController;

@end

@interface TGLoadingViewController : UIViewController
{
    UIView *backGroundView;
    UIImageView *iconImageView;
    UILabel * titleLabel;
    
    LoadingViewFrameType myViewType;
    UIView *mySuperView;
    
}

@property (nonatomic,weak)id<TGLoadingCloseDelegate>delegate;

//只有icon 和 点点点
-(void)startLoading;
-(void)startLoadingWithoutBg;
-(void)startLoading:(UIView *)backView;
-(void)startLoadingWithCloseButton;

//icon 点点点 title 并且 不遮盖用户操作以下layer
-(void)startLoadingWithTitle:(NSString *)title;
-(void)startLoadingWithTitle:(NSString *)title View:(UIView *)view;

//以上两种的关闭方法
-(void)endLoading;

+(TGLoadingViewController *)instance;
@end
