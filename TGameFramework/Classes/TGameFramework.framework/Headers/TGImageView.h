//
//  TGScrollView.h
//  TGameFramework
//
//  Created by TWTech1 on 15/6/30.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TGImageViewDelegate

@optional
-(void)Touched:(id)sender;

@end

@interface TGImageView : UIImageView
@property(nonatomic,assign) id<TGImageViewDelegate> delegate;
@end
