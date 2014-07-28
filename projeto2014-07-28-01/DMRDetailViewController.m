//
//  DMRDetailViewController.m
//  projeto2014-07-28-01
//
//  Created by Danilo Maia Rodrigues on 7/28/14.
//  Copyright (c) 2014 Danilo Maia Rodrigues. All rights reserved.
//

#import "DMRDetailViewController.h"

@interface DMRDetailViewController ()
- (void)configureView;
@end

@implementation DMRDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor redColor];
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
