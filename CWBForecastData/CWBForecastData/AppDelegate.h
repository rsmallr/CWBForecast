//
//  AppDelegate.h
//  CWBForecastData
//
//  Created by Peni on 13/5/25.
//  Copyright (c) 2013年 Peni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CWBForecastDataParser.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, CWBForecastDataParserDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
