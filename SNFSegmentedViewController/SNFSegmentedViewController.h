//
//  SNFSegmentedViewController.h
//  SNFSegmentedViewController
//
//  Created by Seth Friedman on 7/29/13.
//  Copyright (c) 2013 Seth Friedman. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * SNFSegmentedViewController is the simplest way to use a UISegmentedControl to switch between view controllers.
 * Just set the view controllers property in code or in a storyboard.
 * The UIViewController's title is used for the segmented control. If the title is nil, an empty string is used instead.
 */
@interface SNFSegmentedViewController : UITabBarController

@property (strong, nonatomic, readonly) UISegmentedControl *segmentedControl;

@end
