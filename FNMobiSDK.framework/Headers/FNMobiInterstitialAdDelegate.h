//
//  FNMobiInterstitialAdDelegate.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNMobiInterstitialAdDelegate <NSObject>

///  插屏广告预加载成功回调
///  当接收服务器返回的广告数据成功且预加载后调用该函数
- (void)fnMobiInterstitialSuccessToLoadAd;

///  插屏广告曝光回调
- (void)fnMobiInterstitialWillExposure;

/// 插屏广告点击回调
- (void)fnMobiInterstitialClicked;

/// 插屏广告视图展示失败回调
- (void)fnMobiInterstitialFailToPresent:(NSError *)error;

/// 插屏广告页被关闭
- (void)fnMobiInterstitialAdDidDismiss;

@end

NS_ASSUME_NONNULL_END
