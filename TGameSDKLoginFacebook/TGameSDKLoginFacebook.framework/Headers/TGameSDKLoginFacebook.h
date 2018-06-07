//
//  TGameSDKLoginFacebook.h
//  TGameSDKLoginFacebook
//
//  Created by TW-C-060 on 2018/4/8.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol fbLoginDelegate <NSObject>
@optional
/**
 Facebook登录成功的回调
 
 @param userInfo Facebook登录成功后返回的用户信息
 */
-(void) fbLoginSuccess:(NSDictionary *)userInfo;

/**
 Facebook登录失败的回调
 
 @param errorInfo Facebook登录失败返回的错误信息
 */
-(void) fbLoginFailed:(NSDictionary *)errorInfo;

@end

@protocol FbShareDelegate <NSObject>
@optional
/*
 *facebook 分享成功回调
 */
- (void)tFBShareSuccess:(NSDictionary *)result;

/*
 *facebook 分享失败回调
 */
- (void)tFBShareFailed:(NSString *)errorDes;

/*
 *facebook 分享取消回调
 */
- (void)tFBShareCanceled;

@end

@protocol FbInviteDelegate <NSObject>

@optional

-(void)fbInviteSuccess:(NSDictionary *)result;

-(void)fbInviteFailed:(NSError *)error;


@end

/**Facebook初始化*/
static NSString *const TGameSDKLoginFacebookInit = @"tg://login/facebook/init";

/**Facebook的application配置
 *传入对应的参数
 */
static NSString *const TGameSDKLoginFacebookApplication = @"tg://login/facebook/application";
/**Facebook的logEventValueToSumWithParameters配置
 *@param value 传入值
 *@param parameters 传入值
 */
static NSString *const TGameSDKLoginFacebookLogEventValueToSumWithParameters = @"tg://login/facebook/logEventValueToSumWithParameters";
/**Facebook的logEvent配置
 *@param Price 传入值
 *@param NumItems 传入值
 *@param Currency 传入值
 *@param ContentType 传入值
 *@param ContentID 传入值
 */
static NSString *const TGameSDKLoginFacebookLogEvent = @"tg://login/facebook/logEvent";

/**Facebook的didFinishLaunchingWithOptions配置
 *@param application 传入值
 *@param options 传入值
 */
static NSString *const TGameSDKLoginFacebookDidFinishLaunchingWithOptions = @"tg://login/facebook/didFinishLaunchingWithOptions";

/**Facebook的applicationDidBecomeActive配置*/
static NSString *const TGameSDKLoginFacebookApplicationDidBecomeActive = @"tg://login/facebook/applicationDidBecomeActive";

/**Facebook自动登录
 *==参数isAppLogin，默认不传，若为App用到，则设置YES，---App中会用到，区分接入方是否为App接入。
 */
static NSString *const TGameSDKLoginFacebookForFbAutoLogin = @"tg://login/facebook/forFbAutoLogin";

/**Facebook登录*/
static NSString *const TGameSDKLoginFacebookLogin = @"tg://login/facebook/login";

/**Facebook登出*/
static NSString *const TGameSDKLoginFacebookLogout = @"tg://login/facebook/logout";

/**inviteFriendMessage
 *
 *@param message
 *@param title
 */
static NSString *const TGameSDKLoginFacebookInviteFriendMessage = @"tg://login/facebook/inviteFriendMessage";

/**inviteFriendMessage
 *
 *@param imageurl
 *@param title
 *@param des
 *@param fbnamespace
 *@param fbobject
 *@param fbaction
 */
static NSString *const TGameSDKLoginFacebookShare = @"tg://login/facebook/share";

@interface TGameSDKLoginFacebook : NSObject

@property (nonatomic, assign) id<fbLoginDelegate> fbLoginDelegate;
@property (nonatomic, assign) id<FbShareDelegate>fbShareDelegate;
@property (nonatomic, assign) id<FbInviteDelegate>fbInviteDelegate;

+(TGameSDKLoginFacebook *)instance;

/**
 Facebook login
 */
- (void)loginWithFacebook;

/**
 facebook 分享链接
 
 @param photo 图片
 @param imageURL 网络图片链接
 */
- (void) fbShareWithPhotos:(UIImage *)photo
              WithImageURL:(NSString *)imageURL;


/**
 facebook 分享链接
 
 @param linkURL 链接地址
 @param hashTag 标签 格式为 #tag
 @param quote 引文分享
 */
- (void) fbShareWithLinkURL:(NSString *)linkURL
                WithHashTag:(NSString *)hashTag
                  WithQuote:(NSString *)quote;

/*
 * facebook 开放图谱分享
 * @param title 标题
 * @param des 分享内容描述
 * @param imageurl 要分享的图片在网络上的url
 * @param fbobject fb后台设置的分享对象名称
 * @param fbaction fb后台设置的分享动作名称
 * @param fbnamespace fb后台设置的命名空间名称
 *
 */
//- (void) fbShareWithPhotoUrl:(NSString *)imageurl
//                       Title:(NSString *)title
//                 Description:(NSString *)des
//                 FBNamespace:(NSString *)fbnamespace
//                    FBobject:(NSString *)fbobject
//                    FBaction:(NSString *)fbaction;


- (void)fbShareWithUrl:(NSString *)url
          WithImageUrl:(NSString *)imageurl
                 Title:(NSString *)title
           Description:(NSString *)des
           FBNamespace:(NSString *)fbnamespace
          FBobjectType:(NSString *)objectType
          FBactionType:(NSString *)actionType;

/**
 facebook 邀请
 
 @param appLinkURL 接收人点击应用邀请页面的 install/play（安装/试玩）按钮时，所打开的应用链接。
 @param imageURL 邀请中所用图片的网址。
 @param toMessenger 是否需要分享到Messenger,如果分享到Facebook写NO，分享到Messenger请填写YES
 */
- (void)fbInviteWithAppLinkURL:(NSString *)appLinkURL
  WithAppInvitePreviewImageURL:(NSString *)imageURL
              WithDesitination:(BOOL)toMessenger;

@end

