//
//  CertificateMangers.h
//  CertificateMangers
//
//  Created by CS on 2018/11/2.
//  Copyright © 2018年 CS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSCertificateMangers : NSObject

/**
 初始化
 @return CertificateMangers实例
 */
+(instancetype)shareCertificateMangers;


/**
 获取证书-描述文件的UUID
 @return UUID；
 */
-(NSString *)getCertificateUUID;

@end
