//
//  TGameSDK.h
//  TGameSDK
//
//  Created by TW-C-060 on 2018/3/22.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <TGameFramework/TGRouter.h>
#import <TGameFramework/TGHelper.h>
#import <TGameFramework/ViewUtils.h>
#import <TGameFramework/TGAlertViewController.h>
#import <TGameFramework/TGConf.h>
#import <TGameFramework/NSString+URL+JSON.h>
#import <TGameFramework/TGUrlConnection.h>
#import <TGameFramework/NSMutableArray+NSDictionary.h>
#import <TGameFramework/TableViewWithBlock.h>
#import <TGameFramework/TGScrollView.h>
#import <TGameFramework/FrameConst.h>
#import <TGameFramework/TGImageView.h>
#import <TGameFramework/TGLoadingViewController.h>
#import <TGameFramework/FloatButton.h>
#import <TGameFramework/TableViewCell.h>
#import <TGameFramework/UITableView+DelegateBlocks.h>
#import <TGameFramework/UserListCell.h>
#import <TGameFramework/UITableView+DataSourceBlocks.h>
#import <TGameFramework/TGWebView.h>

#import <TalentFramework/CommandCenter.h>

//! Project version number for TGameSDK.
FOUNDATION_EXPORT double TGameSDKVersionNumber;

//! Project version string for TGameSDK.
FOUNDATION_EXPORT const unsigned char TGameSDKVersionString[];

/** TGame delegate */
@protocol TGameDelegate <NSObject>
@optional

/** Callback of login success
 * @param uid 用户平台id
 * @param token
 */
-(void) tLoginCallback:(NSString*)uid token:(NSString*)token;

/** Callback of logout success
 * @param 无
 */
-(void) tLogoutCallback;


/** 支付成功的回调
 * @param orderId TGame平台 订单号
 * @param extInfo 商户自定义信息
 */
- (void)tPurchasedSuccess:(NSString*)orderId extInfo:(NSString*)extInfo;

/** 支付失败的回调
 * @param errorCode 错误代码
 * @param errinfo   错误描述
 */
- (void)tPurchasedFail:(int) errorCode errinfo:(NSString *)errinfo;

/*
 *支付页面关闭回调
 */
- (void)tPayViewClosed;

/*
 *用户中心关闭回调
 */
- (void)tUsercenterViewClosed;

/*
 *登录页面关闭回调, 所有的用户点击登录界面（包括注册界面）的关闭按钮都回调到这里，不区分用户登录成功与否
 */
- (void)tLoginViewClosed;

/*
 *忘记密码关闭回调
 */
- (void)tForgetPWViewClosed;

/*
 *facebook 分享成功回调
 */
- (void)tFBShareSuccess:(NSDictionary *)result;

/*
 *facebook 分享失败回调
 */
- (void)tFBShareFailed:(NSError *)error;

/*
 *facebook 分享取消回调
 */
- (void)tFBShareCanceled;



/**
 VK 分享取消回调
 */
- (void)tVKShareResultCancelled;
/**
 VK 分享成功回调
 */
- (void)tVKShareResultSuccess;

/** 用户领取礼包成功的回调
 * @param giftId 用户所领取的礼包Id
 */
- (void) tGetGiftSuccess:(NSString *)giftId;

@end

@interface TGameSDK : NSObject

@property (nonatomic, assign) id<TGameDelegate> tGameDelegate;

@property (nonatomic, strong) NSString* appId;
@property (nonatomic, strong) NSString* uid;
@property (nonatomic, strong) NSString* uToken;
@property (nonatomic, strong) NSString* username;
@property (nonatomic, strong) NSString* iccpp;
@property (nonatomic, strong) NSString* iscpp;
@property (nonatomic, strong) NSString* stcpp;
@property (nonatomic, strong) NSString* roleId;
@property (nonatomic, strong) NSString* roleName;
@property (nonatomic, strong) NSString* serverCode;
@property (nonatomic, strong) NSString* serverName;
@property (nonatomic, strong) NSString* gameName;
@property (nonatomic, strong) NSString* gameVersion;
@property (nonatomic, strong) NSString* inviteJson;
@property (nonatomic, strong) NSString* deviceId;
@property (nonatomic, assign) BOOL isDebug;

@property (nonatomic, strong) NSString* FBnamespace;
@property (nonatomic, strong) NSString* FBAppid;
@property (nonatomic, strong) NSString* FBmyobject;
@property (nonatomic, strong) NSString* FBmyaction;
@property (nonatomic, strong) NSString* FBtitle;
@property (nonatomic, strong) NSString* FBcaption;
@property (nonatomic, strong) NSString* FBdescription;
@property (nonatomic, strong) NSString* FBlink;
@property (nonatomic, strong) UIImage* FBimage;

@property (nonatomic, strong) NSString* FBInviteMessage;
@property (nonatomic, strong) NSString* FBInviteTitle;

@property (nonatomic, strong) NSString *appsflyerDevKey;
@property (nonatomic, strong) NSString *appleAppID;

@property (nonatomic, strong) NSString *nanigansAppID;
@property (nonatomic, strong) NSString *facebookAppID;
@property (nonatomic, strong) NSString *vkAppID;
@property (nonatomic, strong) NSString *vkDisplayName;

@property (nonatomic, strong) NSString *chartboostAppID;
@property (nonatomic, strong) NSString *chartboostAppSignature;

/**
 是否有UI页面，默认为NO，在initializeApp方法之前配置生效。
 */
@property (nonatomic, assign) BOOL isExistUI;

@property (nonatomic, assign) int status;

@property (nonatomic, strong) NSString *hostUrl;

+(TGameSDK *)instance;

/** Starts a TWGame session. Must have initalized window before calling this method (aka after [self.window makeKeyAndVisible] in AppDelegate)
 * @param appID Application ID for this application
 * @param delegate Delegate to handle common tasks like login, payment, etc
 * @warning After initializing, user will be forced to login if user has not logged in before.
 */
-(void)initializeApp:(NSString*)appID withDelegate:(id<TGameDelegate>)delegate;

/** Show TGame Login
 *
 */
-(void)doLogin;
/**  TGame Logout and then users can't getinto usercenter and paycenter
 *
 */
-(void)doLogout;
/** Show TGame user center
 *
 */
-(void)userCenter;


-(void)viewWillTransitionToCoordinator;
/** Show TGame pyament
 * @param productId 道具id
 * @param buyNum 购买数量
 * @param realPrice 道具价格(货币价格 CP所在地区货币)
 * @param productName 道具名称
 * @param extInfo 商户自定义信息  (例如区服、角色、商户订单号等)
 * @param notifyUrl 后台回调地址 （可不传，在后台配置）
 */
-(void)doPayment:(NSString *)productId
          buyNum:(int)buyNum
       realPrice:(double)realPrice
     productName:(NSString *)productName
         extInfo:(NSString *)extInfo
       notifyUrl:(NSString *)notifyUrl;

/** TGame AppPayment
 * @param productId 道具id
 * @param buyNum 购买数量
 * @param realPrice 道具价格(货币价格 CP所在地区货币)
 * @param productName 道具名称
 * @param extInfo 商户自定义信息  (例如区服、角色、商户订单号等)
 * @param notifyUrl 后台回调地址 （可不传，在后台配置）
 */
- (void)doAppPayment:(NSString *)productId
              buyNum:(int)buyNum
           realPrice:(double)realPrice
         productName:(NSString *)productName
             extInfo:(NSString *)extInfo
           notifyUrl:(NSString *)notifyUrl;

/*
 * 用户登录或者切换账户成功后传输用户名、用户id、服务器名、服务器id
 * @param roleName 登陆游戏用户名
 * @param RoleId 登陆游戏用户ID
 * @param serverName 登陆游戏用户所在服务区
 * @param serverCode 登陆游戏用户所在服务区ID
 * @param gameName 游戏名字
 *
 */
-(void)initGameInfoRoleId:(NSString *)roleId
                 roleName:(NSString *)roleName
               serverCode:(NSString *)serverCode
               serverName:(NSString *)serverName
                 gameName:(NSString *)gameName;

-(void)initInviteInfo:(NSString *)inviteRewardsJson;

/*
 * facebook 分享
 * @param title 标题
 * @param des 分享内容描述
 * @param imageurl 要分享的图片在网络上的url
 * @param fbobject fb后台设置的分享对象名称
 * @param fbaction fb后台设置的分享动作名称
 * @param fbnamespace fb后台设置的命名空间名称
 *
 */
-(void) fbShareWithPhotoUrl:(NSString *)imageurl
                      Title:(NSString *)title
                Description:(NSString *)des
                FBNamespace:(NSString *)fbnamespace
                   FBobject:(NSString *)fbobject
                   FBaction:(NSString *)fbaction;



/**
 vk share
 
 @param text Text to share. User can change it
 @param uploadImages Array of prepared VKUploadImage objects for upload and share. User can remove any attachment
 @param linkTitle Use that field for present link description in share dialog interface
 @param linkUrl Use that field for pass real link to VK. Host of the link will be displayed in share dialog
 */
-(void) vkShareWithText:(NSString *)text
           UploadImages:(NSArray <UIImage *>*)uploadImages
              LinkTitle:(NSString *)linkTitle
                LinkUrl:(NSString *)linkUrl;

/***
 *facebook统计安装的代码:静态方法，
 *所以可以在TGamesdk 实例化之前调用
 ***/
//+(void)facebookAds;

/*
 *统计注册
 *@param roleId
 */
-(void)AppEventsRegisterwithRoleId:(NSString *)roleId;
/*
 *统计支付成功，请再支付成功后，调用此接口
 *@param Price 支付金额
 *@param NumItems 购买物品的数量
 *@param ContentType 购买物品的名称 e.g. "music", "photo", "video"，"金币"
 *@param ContentID 购买物品的itemid，用来标志物品类型的唯一id，不是orderid
 *@param Currency 购买使用的货币类型 e.g,"USD"美刀, "EUR"欧元, "GBP"英镑，"CNY"人民币 其他请查看： https://en.wikipedia.org/wiki/ISO_4217
 */
-(void)AppEventsPurchasePrice:(double)Price
                     numItems:(NSString *)NumItems
                  contentType:(NSString *)ContentType
                    contentID:(NSString *)ContentID
                     currency:(NSString *)Currency;

/*
 *统计支付请求，请再支付之前，用户选择支付物品后，调用此接口
 *@param Price 支付金额
 *@param NumItems 购买物品的数量
 *@param ContentType 购买物品的名称 e.g. "music", "photo", "video"，"金币"
 *@param ContentID 购买物品的itemid，用来标志物品类型的唯一id，不是orderid
 *@param Currency 购买使用的货币类型 e.g,"USD"美刀, "EUR"欧元, "GBP"英镑，"CNY"人民币 其他请查看： https://en.wikipedia.org/wiki/ISO_4217
 *隐藏参数 PaymentInfoAvailable 1
 */
//-(void)facebookAppEventsCheckoutPrice:(double)Price  numItems:(NSString *)NumItems contentType:(NSString *)ContentType contentID:(NSString *)ContentID currency:(NSString *)Currency;

/*
 *统计应用或游戏登录，调用此接口
 *@param roleId 角色id
 */
-(void)AppEventLoggedIn:(NSString *)roleId;

//FirebaseFCM设置
/**
 This property is used to set the APNS Token received by the application delegate.

 @param APNSToken APNSToken 令牌
 */
- (void)setAPNSToken:(NSData *)APNSToken;

/**
 *  Asynchronously subscribes to a topic.
 *
 *  @param topic The name of the topic, for example, @"sports".
 */
- (void)subscribeToTopic:(nonnull NSString *)topic;

/**
 *  Use this to track message delivery and analytics for messages, typically
 *  when you receive a notification in `application:didReceiveRemoteNotification:`.
 *  However, you only need to call this if you set the `FirebaseAppDelegateProxyEnabled`
 *  flag to `NO` in your Info.plist. If `FirebaseAppDelegateProxyEnabled` is either missing
 *  or set to `YES` in your Info.plist, the library will call this automatically.
 *
 *  @param message The downstream message received by the application.
 *
 */
- (void)appDidReceiveMessage:(NSDictionary *)message;

/*
 *以下接口应该同步 应用中对应的回调 ，以保证各个广告 统计等第三方功能可以正常工作
 *@param ……
 */
+(void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+(void)applicationDidBecomeActive:(UIApplication *)application;
+(void)applicationWillEnterForeground:(UIApplication *)application;
+(void)application:(UIApplication *)application
           openURL:(NSURL *)url
 sourceApplication:(NSString *)sourceApplication
        annotation:(id)annotation;
@end



