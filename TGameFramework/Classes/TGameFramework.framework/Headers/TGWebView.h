//
//  TGWebView.h
//  TGameFramework
//
//  Created by TWTech1 on 15-4-3.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NSString+URL+JSON.h"
@interface TGWebView : UIWebView
{

}
//@property (strong, nonatomic) UIWebView *webview;
//@property (strong, nonatomic) CGRect *webviewFrame;
//@property (strong, nonatomic) NSString *url;
//@property (strong, nonatomic) NSArray *header;
//@property (strong, nonatomic) CGRect *webviewFrame;

/*
 *使用默认frame ：全屏
 *默认 header：设备id，tgame版本号，uid，appid
 *默认 post HTTP
 */
-(id)initWithAction:(NSString *)_action Delegete:(id<UIWebViewDelegate>)delegage;

/*
 *默认 header：设备id，tgame版本号，uid，appid
 *默认 post HTTP
 */
-(id)initWithAction:(NSString *)_action Postbody:(NSDictionary *)postbody Delegete:(id<UIWebViewDelegate>)delegage;
/*
 *这个方法会自动分隔 _url用于取请求头
 */
-(id)initWithPostbody:(NSDictionary *)_postbody Url:(NSString *)_url Delegate:(id<UIWebViewDelegate>) _delegate;
/*
 *默认 header：设备id，tgame版本号，uid，appid
 *默认 post HTTP
 */
-(id)initWithFrame:(CGRect)frame Action:(NSString *)_Action Delegete:(id<UIWebViewDelegate>)delegage;

-(id)initWithUserPostbody:(NSDictionary *)_postbody Url:(NSString *)_url Delegate:(id<UIWebViewDelegate>) _delegate;


/*
 *frame
 *postbody
 *url
 *header
 *delegate
 *httpMethod
 */
-(id)initWithFrame:(CGRect)_frame Postbody:(NSDictionary *)_postbody Url:(NSString *)_url Header:(NSDictionary *)_header Delegate:(id<UIWebViewDelegate>) _delegate HTTPMethod:(NSString *)_httpMethod;
-(void)fresh:(NSString *)_url;
-(void)freshWithPostbody:(NSDictionary *)_postbody Url:(NSString *)_url Delegate:(id<UIWebViewDelegate>) _delegate;
-(void)freshWithFrame:(CGRect)_frame Postbody:(NSDictionary *)_postbody Url:(NSString *)_url Header:(NSDictionary *)_header Delegate:(id<UIWebViewDelegate>) _delegate HTTPMethod:(NSString *)_httpMethod;
@end
