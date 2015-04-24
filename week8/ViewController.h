//
//  ViewController.h
//  week8
//
//  Created by Phuong Nguyen on 4/22/15.
//  Copyright (c) 2015 phuong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SocketRocket/SRWebSocket.h"

@interface ViewController : UIViewController <SRWebSocketDelegate, UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextView *messageTextView;

@property (weak, nonatomic) IBOutlet UIView *containerView;

@property (weak, nonatomic) IBOutlet UITextField *messageTextField;

- (IBAction)sendMessage:(id)sender;

@end

