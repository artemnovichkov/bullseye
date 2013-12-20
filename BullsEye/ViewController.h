//
//  ViewController.h
//  BullsEye
//
//  Created by Артем Новичков on 12/19/13.
//  Copyright (c) 2013 Артем Новичков. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIAlertViewDelegate>

-(IBAction)showAlert;
-(IBAction)startOver;
-(IBAction)sliderMoved:(UISlider *)slider;

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

@end
