//
//  RecommendViewModel.h
//  BiliBili
//
//  Created by apple-jd44 on 15/10/21.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseViewModel.h"
@class AVDataModel;
@class IndexDataModel;
@interface RecommendViewModel : BaseViewModel
@property (nonatomic, strong) NSMutableDictionary<NSString*, NSArray<AVDataModel*>*>* list;
@property (nonatomic, strong) NSArray<IndexDataModel*>* headObject;
@property (nonatomic, strong) NSArray<NSDictionary*>* dicMap;
//缩略图部分
- (NSURL *)picForRow:(NSInteger)row section:(NSString*)section;
- (NSString *)titleForRow:(NSInteger)row section:(NSString*)section;
- (NSString *)playForRow:(NSInteger)row section:(NSString*)section;
- (NSString *)danMuCountForRow:(NSInteger)row section:(NSString*)section;
//详情
- (NSString*)authorForRow:(NSInteger)row section:(NSString*)section;
- (NSString*)publicTimeForRow:(NSInteger)row section:(NSString*)section;
- (NSString*)descForRow:(NSInteger)row section:(NSString*)section;

//滚动视图部分
- (NSInteger)sectionCount;
- (NSURL*)headImgURL:(NSInteger)index;
- (NSURL*)headImgLink:(NSInteger)index;
- (NSInteger)numberOfHeadImg;

- (void)refreshDataCompleteHandle:(void(^)(NSError *error))complete;
@end
