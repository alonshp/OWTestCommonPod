Pod::Spec.new do |s|
  s.name             = 'OpenWebCommon'
  s.version          = '2.6.1'
  s.swift_versions   = ['5.0']
  s.summary          = 'OpenWeb Common SDK'
  s.description      = 'Common code for OpenWebSDK and OpenWebIAU'
  s.homepage         = "https://www.openweb.com"
  s.author           = { 'Alon Shprung' => 'alon.shprung@openweb.com' }
  s.platform         = :ios
  s.ios.deployment_target = '13.0'

  # Setting pod `BUILD_LIBRARY_FOR_DISTRIBUTION` to `YES`
  s.pod_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }

  s.source          = { :git => 'git@github.com:alonshp/OWTestCommonPod.git' }
	s.ios.vendored_frameworks = 'OpenWebCommon.xcframework'

end