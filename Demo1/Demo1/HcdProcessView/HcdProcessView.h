//
//  ViewController.m
//  Demo1
//
//  Created by mac on 2017/2/27.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HcdProcessView : UIView

/**
 *  比例尺长度
 */
@property (nonatomic, readwrite, assign) CGFloat scaleDivisionsLength;
/**
 *  比例次刻度宽度
 */
@property (nonatomic, readwrite, assign) CGFloat scaleDivisionsWidth;
/**
 *  比例次到self边距
 */
@property (nonatomic, readwrite, assign) CGFloat scaleMargin;
/**
 *  比例尺的个数
 */
@property (nonatomic, readwrite, assign) CGFloat scaleCount;
/**
 *  比例尺到圆形波纹的距离
 */
@property (nonatomic, readwrite, assign) CGFloat waveMargin;
/**
 *  百分比
 */
@property (nonatomic, readwrite, assign) CGFloat percent;
/**
 *  前波浪颜色
 */
@property (nonatomic, readwrite, retain) UIColor *frontWaterColor;
/**
 *  后波浪颜色
 */
@property (nonatomic, readwrite, retain) UIColor *backWaterColor;
/**
 *  波浪的背景颜色
 */
@property (nonatomic, readwrite, retain) UIColor *waterBgColor;
/**
 *  是否显示背景上的线条
 */
@property (nonatomic, readwrite, assign) BOOL showBgLineView;

@end
