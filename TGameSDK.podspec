#
# Be sure to run `pod lib lint TGSDKText.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TGameSDK'
  s.version          = '0.0.1'
  s.summary          = 'TGameSDK pod Use.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: 移动互联网出海一站式服务平台TigerSDK，通过对接一个SDK为单机、网游、APP提供登录、支付、数据跟踪、运营分析等多种功能。
                       DESC

  s.homepage         = 'https://github.com/TigerSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TigerSDK' => 'liguoping@talentwalker.com' }
  s.source           = { :git => 'git@github.com:TigerSDK/TGameSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

# 设置默认的模块，如果在pod文件中导入pod项目没有指定子模块，导入的是这里指定的模块
s.default_subspec = 'TGameFramework'

# 定义一个核心模块，用户存放抽象的接口、基类以及一些公用的工具类和头文件
s.subspec 'TGameFramework' do |subspec|
    
    # 配置系统Framework
    subspec.frameworks = 'UIKit', 'Foundation'
    subspec.resource = 'TGameFramework/Assets/*.lproj','TGameFramework/Assets/TGameFramework.bundle'
    
    #你的SDK路径
    subspec.vendored_frameworks = 'TGameFramework/Classes/*.framework'
end

# 登录管理模块
s.subspec 'TGameSDKLogin' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKLogin/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameFramework'
end

# 账号密码登录模块
s.subspec 'TGameSDKLoginPw' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKLoginPw/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameSDKLogin'
end

# Facebook登录模块
s.subspec 'TGameSDKLoginFacebook' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKLoginFacebook/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameSDKLogin'
    subspec.dependency 'FBSDKCoreKit'
    subspec.dependency 'FBSDKLoginKit'
    subspec.dependency 'FBSDKShareKit'
end

# VK登录模块
    s.subspec 'TGameSDKLoginVK' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKLoginVK/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameSDKLogin'
    subspec.dependency 'VK-ios-sdk'
end

# Pay模块
s.subspec 'TGameSDKPay' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKPay/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameFramework'
end

# AppsFlyerTracker模块
s.subspec 'TGameSDKAppsFlyerTracker' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKAppsFlyerTracker/*.framework'
    # 配置系统Framework
    subspec.frameworks = 'AdSupport', 'iAd'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameFramework'
end

# NanigansSDK模块
s.subspec 'TGameSDKNanigansSDK' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKNanigansSDK/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameFramework'
end

# Chartboost模块
s.subspec 'TGameSDKChartboost' do |subspec|
    # 添加依赖第三方的framework
    subspec.vendored_frameworks = 'TGameSDKChartboost/*.framework'
    # 依赖的核心模块
    subspec.dependency 'TGameSDK/TGameFramework'
end

# FireBaseFCM推送模块
s.subspec 'TGameSDKFireBaseFCM' do |subspec|
    # 添加依赖第三方的framework
     subspec.vendored_frameworks = 'TGameSDKFireBaseFCM/*.framework'
    # 依赖的核心模块
     subspec.dependency 'TGameSDK/TGameFramework'
     subspec.dependency 'Firebase/Messaging'
end

#s.frameworks = 'UIKit', 'Foundation'
  # s.dependency 'AFNetworking', '~> 2.3'

#s.resource = 'TGameSDK/Assets/*.lproj', 'TGameSDK/Assets/TGameFramework.bundle'

#  s.vendored_frameworks = 'TGameSDKTest.framework'
  #你的SDK路径
  # s.vendored_frameworks = 'TGameSDK/Classes/*.framework'


end
