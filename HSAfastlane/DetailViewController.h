//
//  DetailViewController.h
//  HSAfastlane
//
//  Created by yokada3 on 2016/02/24.
//  Copyright © 2016年 harusou apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

