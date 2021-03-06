//
//  YPEDuAddressListController.h
//  HunQingYH
//
//  Created by Else丶 on 2018/5/2.
//  Copyright © 2018年 YanpengLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YPGetConsigneeInfoList.h"

typedef void(^SelectAddressBlock)(YPGetConsigneeInfoList *infoModel);

@interface YPEDuAddressListController : UIViewController

@property (nonatomic, copy) SelectAddressBlock addressBlock;

@end
