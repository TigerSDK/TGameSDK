//
//  LoginLogic.h
//  TGameFramework
//
//  Created by jianming on 15/3/9.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LoginLogic : NSObject

+(LoginLogic *)instance;
/*
 * 判断登录方式，如：自动登录（tgame），facebook登录，游客登录，并调用具体对应的登录方式
 */
-(void) doLogin;
/*
 *
 */
-(void) showLoginView;
/*
 *以下是三种对应的登录方式，游客登录，自动登录，facebook登录
 */
-(void) vLoginRequest:(NSString *)uuid;
-(void) autoLogin:(NSDictionary*)datasStr;
-(void) facebookRequest;
/*
 *登录成功和失败的处理
 */
-(void) loginSuccess:(NSDictionary *)resDic LoginType:(NSString *)loginType;
-(void) loginFail;

-(void) doLogoutWithoutCallBack;
-(void) doLogout;
 @end
