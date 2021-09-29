//
//  FNRewardVideoAd.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/9/3.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FNRewardVideoAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface FNRewardVideoAd : NSObject

@property (nonatomic,weak)id<FNRewardVideoAdDelegate> delegate;

/// 初始化
- (instancetype)initWithPlacementId:(NSString *)appId ads:(NSString *)adsId;

/// 加载
- (void)loadFNRewarfd;

/// 显示
/// @param rootViewController 用于显示激励视屏
- (void)showFNAdFromRootViewController:(UIViewController *)rootViewController;
@end

NS_ASSUME_NONNULL_END
