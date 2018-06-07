//
//  TGHelper.h
//  TGameFramework
//
//  Created by TWTech1 on 15-4-2.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import <TGameSDK/TGConf.h>
#import "TGConf.h"
#import "TGameSDK.h"
#import <UIKit/UIKit.h>

enum {
    LANG_EN = 0,            // 英语
    LANG_VI,                // 越南语
    LANG_TH,                // 泰语
    LANG_KO,                // 韩语
    LANG_RU,                // 俄语
    LANG_ZH_HANS,           // 中文简体
    LANG_ZH_HANT            // 中文繁体
};

@interface TGHelper : NSObject

+(void) describeDictionary : (NSDictionary*) dict;

+(void)saveBoolInfo2Local:(BOOL)yon key:(NSString *)key;
+(void)saveInfoArray2Local:(NSArray *)array key:(NSString *)key;
+(void)saveInfo2Local:(NSDictionary *)Dic key:(NSString *)key;
+(void)saveObject2Local:(id)str key:(NSString *)key;


+(BOOL)getBoolFromLocalForkey:(NSString *)key;
+(CFDictionaryRef)getInfoFromLocalForKey:(NSString*) key;
+(CFArrayRef)getInfoArrayFromLocalForKey:(NSString*) key;
+(id)getObjectFromLocalForkey:(NSString *)key;

+(NSString *) md5:(NSString *)str;

+(NSString *) pathForResource:(NSString *)path;

+(NSString *) getHost;

+(void) showActionTip : (NSString *)iconType
             messages : (NSString *)messages;

+(void) sayHello : (NSString *)username;

+(NSString *) getDeviceID;

//+(CFStringRef) getCurrentTime;
+(NSString *)getCurrentTime;

+(CFDictionaryRef) getDefaultHeader:(NSString *)action WithPostBody:(NSDictionary *)postbody;

//+(CFStringRef) getCurrentLanguage;
+(NSString *)getTermsHTMLString;
+(NSString *)getCurrentLanguage;
+(NSInteger)getCurrentLanguageType;

+(NSString *)getTGLocalizedString:(NSString *)key;
+(CGRect) getWindowFrame;
+(CGPoint)getWindowCenter;
+(float)getIOSVersion;
+(BOOL)isLandScape;
+(CGRect) getScreenFrame;
+(UIWindow *)getWindow;
+(NSArray *)getIAPErrorArray;


+(void)addIndicatorToView:(UIView *)myview;
+(void)removeIndicator;
@end
