//
//  FNMobiFeedAdManagerDelegate.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/11/5.
//

#import <Foundation/Foundation.h>
#import <FNMobiFeedAd.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNMobiFeedAdManagerDelegate <NSObject>

- (void)feedAdsManagerSuccessToLoadNativeAds:(NSArray<FNMobiFeedAd *> *_Nullable)feedAdDataArray;
   
- (void)feedAdsManagerFailWithError:(NSError *_Nullable)error;
@end

NS_ASSUME_NONNULL_END
