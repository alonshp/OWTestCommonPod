//
//  OWGiphySDKBridge.h
//  OpenWeb-Development
//
//  Created by  Nogah Melamed on 25/03/2024.
//  Copyright © 2024 Spot.IM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OWGiphyMedia : NSObject
@property NSInteger previewWidth;
@property NSInteger previewHeight;
@property NSInteger originalWidth;
@property NSInteger originalHeight;
@property NSString * originalUrl;
@property NSString * _Nullable title;
@property NSString * _Nullable previewUrl;
@end

@protocol OWGiphySDKBridgeDelegate

- (void)didDismissWithController:(UIViewController*)controller;
- (void)didSelectMediaWithGiphyViewController:(UIViewController *)giphyViewController media:(OWGiphyMedia*)media;

@end

@interface OWGiphySDKBridge : NSObject

@property (nonatomic, weak) id<OWGiphySDKBridgeDelegate> delegate;

+ (BOOL)isGiphySDKAvailable;

- (instancetype)init;
- (void)configure:(NSString*)apiKey;
- (nullable UIViewController*)gifSelectionVC;
- (void)setIsDarkMode:(Boolean)isDarkMode;

@end

NS_ASSUME_NONNULL_END
