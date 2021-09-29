//
//  FNRewardVideoAdDelegate.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/9/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNRewardVideoAdDelegate <NSObject>
// 加载成功
- (void)fnRewardVideoAdDidLoad;

// 曝光回调
- (void)fnRewardVideoAdDidExposed;

//关闭回调
- (void)fnRewardVideoAdDidClose;

// 点击回调
- (void)fnRewardVideoAdDidClicked;

// 播放达到激励条件回调
- (void)fnRewardVideoAdDidRewardEffective;

// 播放失败回调
- (void)fnRewardVideoAdDidFaildWithError:(NSError *)error;
 
@end

NS_ASSUME_NONNULL_END
