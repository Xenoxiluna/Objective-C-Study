//
//  DetailViewController.h
//  XenBlog
//
//  Created by Quentin Berry on 11/8/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

