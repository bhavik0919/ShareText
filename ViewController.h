//
//  ViewController.h
//  ShareText
//
//  Created by Bhavik Panchal on 9/24/15.
//  Copyright © 2015 Bhavik Panchal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *text;

@property (nonatomic, strong) UIActivityViewController *activityViewController;

@property (weak, nonatomic) IBOutlet UIButton *btnshare;

@end

