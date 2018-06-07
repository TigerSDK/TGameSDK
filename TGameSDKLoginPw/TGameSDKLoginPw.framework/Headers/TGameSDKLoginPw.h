//
//  TGameSDKLoginPw.h
//  TGameSDKLoginPw
//
//  Created by TW-C-060 on 2018/4/3.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol LoginDelegate <NSObject>
@optional

/**
 登录成功的回调
 
 @param userInfo 登录成功后返回的用户信息
 */
-(void) loginSuccess:(NSDictionary *)userInfo;

/**
 登录失败的回调
 
 @param errorInfo 登录失败后返回的错误信息
 */
-(void) loginFailed:(NSDictionary *)errorInfo;

@end

@protocol RegisterDelegate <NSObject>
@optional

/**
 注册成功的回调
 
 @param backInfo 注册成功后返回的信息
 */
-(void) registerSuccess:(NSDictionary *)backInfo;


/**
 注册失败的回调
 
 @param errorInfo 注册失败后返回的错误信息
 */
-(void) registerFailed:(NSDictionary *)errorInfo;


@end

@protocol FindPasswordDelegate <NSObject>
@optional

/**
 找回密码成功的回调
 */
-(void) findPasswordSuccess;

/**
 找回密码失败的回调
 
 @param errorInfo 找回密码失败返回的错误信息
 */
-(void) findPasswordFailed:(NSDictionary *)errorInfo;

@end

@protocol RefreshTokenDelegate <NSObject>

/**
 自动登录成功的回调
 
 @param userInfo 自动登录成功返回的用户信息
 */
- (void) refreshTokenSuccess:(NSDictionary *)userInfo;

/**
 自动登录失败的回调
 
 @param errorInfo 自动登录失败返回的错误信息
 */
- (void) refreshTokenFailed:(NSDictionary *)errorInfo;


@end

/**账号密码登录
 *===传参数name，用户名
 *===传参数pw，密码
 */
static NSString *const TGameSDKLoginPassWord = @"tg://login/passWord";

/**自动登录成功回调---用于内部调用
 *===传参数userInfo，用户信息
 */
static NSString *const TGameSDKLoginPassWordRefreshTokenSuccess = @"tg://login/passWord/refreshTokenSuccess";

/**自动登录失败回调
 *===传参数errorInfo，用户信息
 */
static NSString *const TGameSDKLoginPassWordRefreshTokenFailed = @"tg://login/passWord/refreshTokenFailed";

@interface TGameSDKLoginPw : NSObject

@property (nonatomic, assign) id<LoginDelegate> loginDelegate;
@property (nonatomic, assign) id<RegisterDelegate> registerDelegate;
@property (nonatomic, assign) id<FindPasswordDelegate> findPasswordDelegate;
@property (nonatomic, assign) id<RefreshTokenDelegate>refreshTokenDelegate;

+(TGameSDKLoginPw *)instance;


/**
 TGame login
 
 @param email 邮箱地址
 @param password 密码
 */
- (void)doLoginWithEmail:(NSString *)email WithPassword:(NSString *)password;

/**
 Auto Login because of token may be overdued.
 */
- (void)refreshToken;

/**
 TGame register
 
 @param email 邮箱地址
 @param password 密码
 */
- (void)registerWithEmail:(NSString *)email WithPassword:(NSString *)password;

/**
 TGame find password
 
 @param email 邮箱地址
 */
- (void)findPasswordWithEmail:(NSString *)email;

@end
