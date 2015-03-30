//
//  tgModel.m
//  buyInGroup
//
//  Created by qiao xingxing on 15/3/31.
//  Copyright (c) 2015年 qiao xingxing. All rights reserved.
//

#import "tgModel.h"

@implementation tgModel

+(instancetype)goodsWithDic:(NSDictionary *)dict{
   return [[self alloc] initWithDict:dict];
}
-(instancetype)initWithDict:(NSDictionary *)dict{
    
    if (self =[super init]) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}
@end
