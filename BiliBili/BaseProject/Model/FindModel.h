//
//  FindModel.h
//  BiliBili
//
//  Created by apple-jd44 on 15/11/3.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@interface FindModel : BaseModel
@property (nonatomic, strong) NSArray* list;
@end

@interface FindDataModel : BaseModel
@property (nonatomic, strong)NSString* keyword;
@property (nonatomic, strong)NSString* status;
@end

@interface FindImgModel : BaseModel
@property (nonatomic, strong) NSArray* recommend;
@end

@interface FindImgDataModel : BaseModel
@property (nonatomic, assign)CGFloat width;
@property (nonatomic, assign)CGFloat height;
@property (nonatomic, strong)NSString* cover;
@property (nonatomic, strong)NSString* keyword;
@end