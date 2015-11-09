//
//  ViewController.h
//  FunFacts
//
//  Created by Quentin Berry on 11/4/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "FactBook.h"

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@property (strong, nonatomic) FactBook *factBook;
@property (strong, nonatomic) ColorWheel *colorWheel;

@end

