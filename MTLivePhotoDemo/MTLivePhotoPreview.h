//
//  MTLivePhotoPreview.h
//  MTLivePhotoDemo
//
//  Created by wuxi on 16/10/8.
//  Copyright © 2016年 wuxi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface MTLivePhotoPreview : UIView

@property (nonatomic, strong)AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, strong)AVCaptureSession *session;

+ (Class)layerClass;
@end
