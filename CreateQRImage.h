//
//  CreateQRImage.h
//  CIFilter
//
//  Created by 王晓东 on 16/5/30.
//  Copyright © 2016年 Ericdong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CreateQRImage : NSObject
/**
 *  传入信息和尺寸
 *
 *  @param string 原始信息
 *  @param size   image预期尺寸
 *
 *  @return 生成的二维码
 */
+ (UIImage *)CreateQRImageWithString:(NSString *)string size:(CGSize)size;
@end
