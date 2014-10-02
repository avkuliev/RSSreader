//
//  DetailViewController.h
//  RSSreader
//
//  Created by Alexander Kuliev on 10/2/14.
//  Copyright (c) 2014 Alexander Kuliev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
