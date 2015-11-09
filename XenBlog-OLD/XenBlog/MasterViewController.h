//
//  MasterViewController.h
//  XenBlog
//
//  Created by Quentin Berry on 11/8/15.
//  Copyright © 2015 Quentin Berry. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NSArray *titlesArray;

@end

