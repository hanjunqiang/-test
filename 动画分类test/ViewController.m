//
//  ViewController.m
//  动画分类test
//
//  Created by 韩军强 on 16/6/2.
//  Copyright © 2016年 ios. All rights reserved.
//

#import "ViewController.h"
#import "CALayer+LYAdd.h"

@interface ViewController ()
@property (nonatomic, strong) UIImageView *imageView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    UIButton *btn=[[UIButton alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
    btn.backgroundColor=[UIColor redColor];
    [self.view addSubview:btn];
    [btn addTarget:self action:@selector(ccc) forControlEvents:UIControlEventTouchUpInside];
    
    
    UIImageView *imageView=[[UIImageView alloc] initWithFrame:CGRectMake(250, 300, 200, 200)];
    imageView.image=[UIImage imageNamed:@"fmrwBackground.jpg"];
    self.imageView=imageView;
    [self.view addSubview:imageView];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)ccc
{

//    self.imageView.frame=CGRectMake(0, 0, 200, 200);
    
    CALayer *aa=[[CALayer alloc] init];
    CATransition *animation = [aa transitionWithAnimType:LYTransitionAnimTypeRamdom subType:LYTransitionSubtypesFromLeft curve:LYTransitionCurveRamdom duration:3];
    [self.imageView.layer addAnimation:animation forKey:@"hehe"];//key随便填写
}

@end
