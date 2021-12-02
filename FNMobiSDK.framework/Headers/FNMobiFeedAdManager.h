//
//  FNMobiFeedAdManager.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/11/5.
//

#import <Foundation/Foundation.h>
#import "FNMobiFeedAd.h"
#import "FNMobiFeedAdManagerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface FNMobiFeedAdManager : NSObject

@property (nonatomic,weak)id<FNMobiFeedAdManagerDelegate> delegate;
@property (nonatomic, strong, readonly) NSArray<FNMobiFeedAd *> *feedData;
/// 构造方法呢
/// @param appId 渠道ID
/// @param adsId 广告位ID
/// @param size 视图size
- (instancetype)initWithAppId:(NSString *)appId adsId:(NSString *)adsId size:(CGSize)size;


/// 加载视图条目
/// @param count 加载条数  默认为1，最大值为3
- (void)loadAdDataWithCount:(NSInteger)count;
@end

NS_ASSUME_NONNULL_END
