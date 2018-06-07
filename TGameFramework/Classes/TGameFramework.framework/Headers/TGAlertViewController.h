//
//  TGAlertViewController.h
//  TGameFramework
//
//  Created by TWTech1 on 15-5-13.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^TGAlertViewButtonClick)(int indext);


@interface TGAlertViewController : UIViewController
{
    TGAlertViewButtonClick AlertViewBlock;
}
@property (nonatomic,retain)  UILabel* alertTitle;
@property (nonatomic,retain)  UILabel* alertContent;
@property (nonatomic,retain) NSMutableArray* buttonArray;

-(TGAlertViewController *)initWithMessage:(NSString *)message;
-(TGAlertViewController *)initWithTitle:(NSString *)title Message:(NSString *)message;
-(TGAlertViewController *)initWithTitle:(NSString *)title Message:(NSString *)message WithBlock:(TGAlertViewButtonClick)myblock ButtonTitle:(NSString *)buttontitle,...;

-(void)show;
-(void)confirmButtonClicked;
@end
