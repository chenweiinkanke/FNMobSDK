//
//  FNMobiIntersititialAd.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/12/15.
//

#import <Foundation/Foundation.h>
#import "FNMobiInterstitialAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface FNMobiIntersititialAd : NSObject

@property (nonatomic,weak)id<FNMobiInterstitialAdDelegate> delegate;

/// 构造方法
/// @param adsId 广告位ID
- (instancetype)initWithPlacementId:(NSString *)adsId;

/// 广告发起请求方法
- (void)loadInterstitialAd;

///  广告展示方法
/// @param rootViewController 必须传入用于显示插播广告的UIViewController
- (void)presentAdFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
