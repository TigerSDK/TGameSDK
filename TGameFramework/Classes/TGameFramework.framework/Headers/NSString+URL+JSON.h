//
//  NSString+URL+JSON.h
//  TGameFramework
//
//  Created by melon on 15-4-1.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TGHelper.h"

@interface NSString(NSStringURLJSON)
/* 
 从String类型的url转化为字典
*/
+(NSDictionary*) dicFromStringURL:(NSString*) url;
/*
 从String类型的json转化为字典
 */
+(NSDictionary*) dicFromJstr:(NSString*) jStr;
/*
 从url格式的字符串转化为正常的字符串
 */
+(NSString*) stringByDecodingURLFormat: (NSString*) url;
/*
 将字典转化为json形式的字符串
 */
+(CFStringRef) jsonStringWithDictionary:(NSDictionary *)dictionary;
/*
 将数组转化为json形式的字符串
 */
+(NSString *) jsonStringWithArray:(NSArray *)array;
/*
 将普通字符串转化为json形式的字符串
 */
+(NSString *) jsonStringWithString:(NSString *) string;
/*
 将普通对象转化为json形式的字符串
 */
+(NSString *) jsonStringWithObject:(id) object;
/*
 将faceboo返回的：用户ids 和其他信息的综合体 转化为json形式的字符串，并且保证uid在最前
 */
+(CFStringRef) JSONStringFromFacebookResults:(id)result with:(NSString *)uid;


@end
