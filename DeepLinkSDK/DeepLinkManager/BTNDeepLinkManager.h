#import <Foundation/Foundation.h>
#import "BTNDeepLinkRouteHandlerProtocol.h"

@class BTNDeepLinkRouter, BTNDeepLinkDisplayCoordinator;

/**
 The completion block definition for `handleDeepLink:completionHandler:'
 @param handled Indicates whether or not the deep link was handled.
 @param error An error if one occurred while handling a deep link URL.
 */
typedef void(^BTNDeepLinkCompletionHandler)(BOOL handled, NSError *error);


@interface BTNDeepLinkManager : NSObject

/// The display coordinator which determines the default presenting view controller.
@property (nonatomic, strong) BTNDeepLinkDisplayCoordinator *displayCoordinator;


/**
 Attempts to handle an incoming deep link URL.
 @param url The incoming URL from `application:didFinishLaunchingWithOptions:' or `application:openURL:sourceApplication:annotation:'
 @param completionHandler A block executed after the deep link has been handled.
 @return YES if the deep link can be handled, otherwise NO.
 
 @see BTNDeepLinkCompletionHandler
 */
- (BOOL)handleDeepLink:(NSURL *)url completionHandler:(BTNDeepLinkCompletionHandler)completionHandler;

@end