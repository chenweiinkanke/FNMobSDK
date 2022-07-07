
[FN直媒SDK目录[
├── FNMobiSDK.h  # framework 头文件引入
├── FNMobiSDK.md
├── Info.plist
├── [SDK[ #三方SDK
│   └── [IJKMediaFramework.framework[     #视屏播放ijk
│       ├── [Headers[
│       ├── IJKMediaFramework
│       ├── Info.plist
│       └── [Modules[
├── [UIDisplay[ #UI层
│   ├── FNViewDefine.h  #宏定义
│   ├── [fnmobiFeedAd[ #信息流广告
│   │   ├── FNMobiFeedAd.h  #单个item管理
│   │   ├── FNMobiFeedAd.m
│   │   ├── FNMobiFeedAdManager.h #信息流初始化
│   │   ├── FNMobiFeedAdManager.m
│   │   ├── FNMobiFeedAdView.h   #单个itemUI
│   │   └── FNMobiFeedAdView.m
│   ├── [fnmobiIntersititial[ #插屏广告
│   │   ├── FNMobiIntersititialAd.h
│   │   ├── FNMobiIntersititialAd.m
│   │   ├── FNMobiIntersititialVC.h
│   │   ├── FNMobiIntersititialVC.m
│   │   ├── FNMobiIntersititialView.h
│   │   └── FNMobiIntersititialView.m
│   ├── [fnmobiRewardAd[ #激励视屏广告
│   │   ├── FNRewardPlayerVC.h
│   │   ├── FNRewardPlayerVC.m
│   │   ├── FNRewardVideoAd.h
│   │   └── FNRewardVideoAd.m
│   └── [fnmobiSplashAd[ #开屏广告
│       ├── FNMobiSpalshAdView.h
│       ├── FNMobiSpalshAdView.m
│       ├── FNMobiSplashAd.h
│       └── FNMobiSplashAd.m
├── [category[
│   ├── NSObject+AdReport.h #上报请求
│   ├── NSObject+AdReport.m
│   ├── NSObject+FNError.h  #错误处理
│   ├── NSObject+FNError.m
│   ├── NSObject+FNMobiAdReportParams.h #请求参数处理
│   ├── NSObject+FNMobiAdReportParams.m
│   ├── NSObject+FNMobiClickJump.h  #点击跳转
│   ├── NSObject+FNMobiClickJump.m
│   ├── NSObject+FNMobiPbuf.h   #上报参数加密
│   ├── NSObject+FNMobiPbuf.m
│   ├── NSObject+FNMobiProperty.h  #环境设置
│   ├── NSObject+FNMobiProperty.m
│   ├── NSObject+FNMobiStringByReplacing.h  #上报链接宏替换
│   ├── NSObject+FNMobiStringByReplacing.m
│   ├── NSObject+FNMobiTools.h #加密字符串处理
│   ├── NSObject+FNMobiTools.m
│   ├── NSObject+FNNotification.h #通知
│   ├── NSObject+FNNotification.m
│   ├── NSObject+FNtimer.h   #定时器
│   ├── NSObject+FNtimer.m
│   ├── UIViewController+SKPModel.h 
│   └── UIViewController+SKPModel.m
├── [dataCache[
│   ├── FNManager.h  #SDK初始化
│   └── FNManager.m
├── [eventAction[
│   ├── FNFeedViewDelegate.h   #信息流事件响应
│   ├── FNMobiIntersititialViewDelegate.h #插屏事件响应
│   ├── FNMobiSplashViewDelegate.h #开屏事件响应
│   └── FNRewardPlayerVCDelegate.h #激励视频事件响应
├── [fnMobi.bundle[ #图片资源
│   ├── Mute@2x.png
│   ├── Mute@3x.png
│   ├── clickBtn@2x.png
│   ├── clickBtn@3x.png
│   ├── close@2x.png
│   ├── close@3x.png
│   ├── volume@2x.png
│   └── volume@3x.png
├── fnmobiPrefixHeader.pch
├── [internetRequest[ #网络层
│   ├── FNAdRequest.h
│   ├── FNAdRequest.m
│   ├── FNMobiNativeNetworking.h
│   ├── FNMobiNativeNetworking.m
│   ├── FNMobiURLHeader.h
│   ├── [analyzeData[ #数据解析
│   │   ├── FNMobiClassInfo.h
│   │   ├── FNMobiClassInfo.m
│   │   ├── FNMobiModel.h
│   │   ├── FNMobiReachability.h
│   │   ├── FNMobiReachability.m
│   │   ├── NSObject+FNMobiModel.h
│   │   └── NSObject+FNMobiModel.m
│   ├── [data[
│   │   ├── FNLocation.h #获取定位
│   │   ├── FNLocation.m
│   │   ├── FNMobiAdReportParams.h
│   │   ├── FNMobiAdReportParams.m
│   │   ├── ReportInfo.h  #上报header参数
│   │   └── ReportInfo.m
│   └── [model[ #数据model
│       ├── FNAdInfoModel.h
│       ├── FNAdInfoModel.m
│       ├── FNAdModel.h
│       ├── FNAdModel.m
│       ├── FNMobiURLSchemeModel.h
│       └── FNMobiURLSchemeModel.m
└── [userInterface[ #用户回调
    ├── FNMobiFeedAdManagerDelegate.h #信息流用户回调
    ├── FNMobiInterstitialAdDelegate.h #插屏用户回调
    ├── FNMobiSplashAdDelegate.h #开屏用户回调
    └── FNRewardVideoAdDelegate.h #激励视频用户回调
    
18 directories, 91 files
