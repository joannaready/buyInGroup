//
//  tgModel.h
//  buyInGroup
//
//  Created by qiao xingxing on 15/3/31.
//  Copyright (c) 2015年 qiao xingxing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface tgModel : NSObject

@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *price;
@property(nonatomic,strong) NSString *icon;
@property(nonatomic,strong) NSString *buyCount;


+(instancetype)goodsWithDict:(NSDictionary *)dict;
-(instancetype)initWithDict:(NSDictionary *)dict;
@end
