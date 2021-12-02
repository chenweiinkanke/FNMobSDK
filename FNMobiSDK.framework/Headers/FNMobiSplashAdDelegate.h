//
//  FNMobiSplashAdDelegate.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/10/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNMobiSplashAdDelegate <NSObject>


/// 开屏广告素材加载成功
- (void)fnSplashAdDidLoad;

///  开屏广告加载失败
-(void)fnSplashAdLoadFail:(NSError *)error;

/// 开屏广告成功展示
-(void)fnSplashAdSuccessPresentScreen;

/// 开屏广告展示失败
-(void)fnSplashAdFailToPresentWithError:(NSError *)error;

/// 开屏广告点击回调
- (void)fnSplashAdClicked;

/// 开屏广告点击跳过
- (void)fnSplashAdSkiped;

/// 开屏广告展示完成并自动关闭
- (void)fnSplashAdDidAutoDismiss;

/// 开屏广告关闭回调
- (void)fnSplashAdClosed;

@end

NS_ASSUME_NONNULL_END
