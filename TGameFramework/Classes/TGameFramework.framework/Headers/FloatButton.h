//
//  FloatButton.h
//  TGameFramework
//
//  Created by TWTech1 on 15/6/23.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FloatButtonDelegate <NSObject>

-(void)open;
-(void)close;

@end

typedef NS_ENUM (NSUInteger, LocationTag)
{
    kLocationTag_left=1,
    kLocationTag_right
    
};

@interface FloatButton : UIButton
{
    
//    BOOL _bShowMenu;//是否在展开了菜单，展开时不允许移动浮标
    BOOL _bMoving;//是否在移动浮标
    
    float _w;
    float _h;
    
    CGPoint moveStartPoint;
    
    NSTimer *timer;
    
    float distance;
}
@property (nonatomic,assign) BOOL bShowMenu;
@property (nonatomic,assign) LocationTag locationTag;
@property (nonatomic,assign) id<FloatButtonDelegate> floatbuttonDelegate;
-(void)validTimer;

@end
