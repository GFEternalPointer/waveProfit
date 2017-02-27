//
//  ViewController.m
//  Demo1
//
//  Created by mac on 2017/2/27.
//  Copyright © 2017年 mac. All rights reserved.
//

#import "ViewController.h"
#import "HcdProcessView.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    CGFloat W = self.view.frame.size.width;
   
    HcdProcessView *customView = [[HcdProcessView alloc]initWithFrame:CGRectMake(W * 0.1, 30, W * 0.8, W * 0.8)];
    
    customView.showBgLineView = YES;
    customView.percent = 0.76;
    
    _imageView.contentMode = UIViewContentModeScaleToFill;
    
    
    
    [self.view addSubview:customView];
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
