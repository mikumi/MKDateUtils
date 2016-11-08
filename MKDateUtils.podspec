#
# Be sure to run `pod lib lint MKDateUtils.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MKDateUtils'
  s.version          = '0.1.0'
  s.summary          = 'Collection of NSDate convenience methods'
  s.description      = <<-DESC
A small collection of NSDate convenience methods.
                       DESC
  s.homepage         = 'https://github.com/mikumi/MKDateUtils'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Michael Kuck' => 'me@michael-kuck.com' }
  s.source           = { :git => 'https://github.com/mikumi/MKDateUtils.git', :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/michaelkuckcom'
  s.ios.deployment_target = '8.0'
  s.watchos.deployment_target = '3.0'
  s.source_files = 'MKDateUtils/Classes/**/*'
end
