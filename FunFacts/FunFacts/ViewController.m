//
//  ViewController.m
//  FunFacts
//
//  Created by Quentin Berry on 11/4/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.factBook = [[FactBook alloc] init];
    self.colorWheel = [[ColorWheel alloc] init];
    
    UIColor *randomColor = [self.colorWheel randomColor];
    self.funFactButton.tintColor = randomColor;
    self.view.backgroundColor = randomColor;
    self.funFactLabel.text = [self.factBook randomFact];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact {
    UIColor *randomColor = [self.colorWheel randomColor];
    self.funFactButton.tintColor = randomColor;
    self.view.backgroundColor = randomColor;
    self.funFactLabel.text = [self.factBook randomFact];
}

@end
