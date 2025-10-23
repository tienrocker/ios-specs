Pod::Spec.new do |spec|
  spec.name         = "VGPSDK"
  spec.version      = "5.1.3"
  spec.summary      = "A core SDK for VGP functionalities."
  spec.description  = <<-DESC
    VGPSDK provides core functionalities for the VGP platform, including account management, payment, and networking.
  DESC
  spec.homepage     = "https://gitlab.vgplay.vn/tienrocker/ios-specs.git"
  spec.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }
  spec.author       = { "Tien Tran" => "tienrocker@gmail.com" }
  spec.social_media_url = "https://twitter.com/tienrocker"

  # Minimum iOS supported version
  spec.platform     = :ios, "13.0"
  spec.ios.deployment_target = "13.0"

  # Source
  spec.source = { :git => "http://gitlab.vgplay.vn/tienrocker/ios-specs.git", :tag => spec.version.to_s }

  # Framework
  spec.vendored_frameworks = "VGPSDK.xcframework"

  # Required frameworks
  spec.frameworks = 'UIKit', 'Foundation', 'CoreTelephony', 'StoreKit'
  spec.weak_frameworks = 'AppTrackingTransparency'

  # Enable ARC and static framework mode
  spec.requires_arc = true
  spec.static_framework = true
  spec.swift_versions = ['5.0', '5.3', '5.5', '5.9']

  # Dependencies
  spec.dependency 'FBAEMKit', '~> 18.0.1'
  spec.dependency 'FBSDKCoreKit', '~> 18.0.1'
  spec.dependency 'FBSDKCoreKit_Basics', '~> 18.0.1'
  spec.dependency 'FBSDKLoginKit', '~> 18.0.1'
  spec.dependency 'FBSDKShareKit', '~> 18.0.1'

  spec.dependency 'FirebaseAnalytics', '~> 11.15.0'
  spec.dependency 'FirebaseMessaging', '~> 11.15.0'
  spec.dependency 'GoogleSignIn', '~> 9.0.0'

  spec.dependency 'Adjust', '~> 5.4.5'
  spec.dependency 'AdjustSignature', '~> 3.47.0'

  spec.dependency 'TikTokBusinessSDK', '~> 1.5.1'
  spec.dependency 'SocketRocket', '~> 0.7.1'
end
