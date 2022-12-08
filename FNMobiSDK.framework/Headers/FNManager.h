//
//  FNManager.h
//  FNDirectMediaSDK
//
//  Created by ALAN on 2021/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNManager : NSObject

/// 单例  didFinishLaunchingWithOptions中调用
+ (instancetype)shareFNManager;

//5.4.2
+ (NSString *)sdkVersion;

/// 用于初始化数据
/// @param appid appid
- (void)initWithAppId:(NSString *)appid;

@end

NS_ASSUME_NONNULL_END
