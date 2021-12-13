//
//  FNMobiSplashAd.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/10/28.
//

#import <Foundation/Foundation.h>
#import "FNMobiSplashAdDelegate.h"
          

NS_ASSUME_NONNULL_BEGIN

@interface FNMobiSplashAd : NSObject


@property (nonatomic,weak)id<FNMobiSplashAdDelegate> delegate;

/// 构造方法
/// @param adsId 广告位ID
/// @param appId 渠道id
- (instancetype)initWithAdsId:(NSString *)adsId appid:(NSString *)appId;

/// 加载广告
- (void)loadSplashAdData;

/// 显示开屏广告
/// @param window 用于显示广告
/// @param bottomView 自定义底部logo
- (void)showAdInWindow:(UIWindow *)window  withBottomView:(UIView *)bottomView;
@end

NS_ASSUME_NONNULL_END
