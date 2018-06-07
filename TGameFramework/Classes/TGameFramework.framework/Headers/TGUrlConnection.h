//
//  TGUrlConnection.h
//  TGameFramework
//
//  Created by TWTech1 on 15-4-7.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGHelper.h"

@interface NSURLConnection(TGUrlConnection)
/*
 *
 *
 */
+ (NSDictionary *)sendRequestWithPostdata:(NSDictionary *)_postData Url:(NSString *)_url Header:(NSDictionary *)_header HttpMethod:(NSString *)_method;
+ (NSDictionary *)sendRequestWithPostdata:(NSDictionary *)_postData Action:(NSString *)_action AddHeader:(NSDictionary *)_header;
+ (NSDictionary *)sendRequestWithAction:(NSString *)_action AddHeader:(NSDictionary *)_header;
+ (NSDictionary *)sendRequestWithPostdata:(NSDictionary *)_postData Action:(NSString *)_action ;

+ (NSDictionary *)sendRequestWithPostdata:(NSDictionary *)_postData Url:(NSString *)_url  AddHeader:(NSDictionary *)_header;
@end
