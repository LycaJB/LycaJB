//
//  LycaJBViewController.h
//  LycaJB
//
//  Created by Joseph Shenton on 22/6/18.
//  Copyright © 2018 JJS Digital PTY LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GCDWebServer/Core/GCDWebServer.h"
#import "GCDWebServer/Responses/GCDWebServerDataResponse.h"

NS_ASSUME_NONNULL_BEGIN

@interface LycaJBViewController : UIViewController {
    GCDWebServer* _webServer;
}
@property (weak, nonatomic) IBOutlet UIButton *jailbreak;

@end

NS_ASSUME_NONNULL_END
