//
//  DPLDeepLink+CCExtend.m
//  DeepLinkKit
//
//  Created by miner on 2017/2/28.
//  Copyright © 2017年 Button, Inc. All rights reserved.
//

#import "DPLDeepLink+CCExtend.h"

@implementation DPLDeepLink (CCExtend)

- (void)setRoute:(NSString *)route {

    objc_setAssociatedObject(self, @selector(route), route, OBJC_ASSOCIATION_COPY);
}

- (NSString *)route {
    return objc_getAssociatedObject(self, _cmd);
}

@end
