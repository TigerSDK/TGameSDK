//
//  UserListCell.h
//  TGameFramework
//
//  Created by caoyuan on 2017/8/30.
//  Copyright © 2017年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserListCell : UITableViewCell

@property (nonatomic,strong) UIImageView *iconImageView;
@property (nonatomic,strong) UILabel     *nameLabel;     //用户名
@property (nonatomic,strong) UIButton    *deleteButton;  //删除按钮

@end
