//
//  AboutViewController.h
//  BullsEye
//
//  Created by Артем Новичков on 12/20/13.
//  Copyright (c) 2013 Артем Новичков. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController

-(IBAction)close;

@property (nonatomic, weak) IBOutlet UIWebView *webView;

@end
