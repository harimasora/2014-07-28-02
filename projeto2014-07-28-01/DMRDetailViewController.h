//
//  DMRDetailViewController.h
//  projeto2014-07-28-01
//
//  Created by Danilo Maia Rodrigues on 7/28/14.
//  Copyright (c) 2014 Danilo Maia Rodrigues. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DMRDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
