//
//  YOLoginViewController.h
//  YahooSDKDemo
//
//  Created by Michael Ho on 8/6/14.
//  Copyright 2014 Yahoo Inc.
//
//  The copyrights embodied in the content of this file are licensed under the BSD (revised) open source license.
//

#import <UIKit/UIKit.h>

@interface YOLoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *loginYahooButton;
- (IBAction)loginYahooPressed:(id)sender;

@end
