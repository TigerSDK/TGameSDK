//
//  NSArray+NSDictionary.h
//  TGameFramework
//
//  Created by TWTech1 on 15-5-5.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray(TGNSArray)
/*
 *删除array中的元素，同时删除dictionary中的元素，用于多账号显示
 *
 */
-(void)deleteObjectInArrayAndDictionary:(id)object;
-(void)insertObjectwithoutRepeat:(id)anObject atIndex:(NSUInteger)index;
@end
