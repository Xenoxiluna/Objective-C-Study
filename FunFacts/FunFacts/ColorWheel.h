//
//  ColorWheel.h
//  FunFacts
//
//  Created by Quentin Berry on 11/7/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *) randomColor;

@end
