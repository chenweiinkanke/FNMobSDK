//
//  FNMobiFeedAd.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/11/4.
//

#import <UIKit/UIKit.h>
//#import "FNMobiFeedAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@protocol FNMobiFeedAdDelegate;

@interface FNMobiFeedAd : UIView

@property (nonatomic,weak)id<FNMobiFeedAdDelegate> delegate;
@property (nonatomic,readonly)UIView *feedView;
@end


@protocol FNMobiFeedAdDelegate <NSObject>
/// 关闭
- (void)feedAdClosed:(FNMobiFeedAd *)fnMobiFeedAd;

/// 点击
- (void)feedAdDidClick:(FNMobiFeedAd *)fnMobiFeedAd;

/// 将要显示
- (void)feedAdViewWillShow:(FNMobiFeedAd *)fnMobiFeedAd;

@end

NS_ASSUME_NONNULL_END
