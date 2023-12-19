//
//  ViewController.h
//  ZAD3IOS
//
//  Created by student on 12/12/2023.
//  Copyright © 2023 sm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

-(IBAction) showShakeDetectedAlert;
- (BOOL) canBecomeFirstResponder;


@property (nonatomic, weak) IBOutlet UILabel *gestureLabel;
@property (nonatomic, weak) IBOutlet UIButton *btn;

- (IBAction) tapGesture: (UITapGestureRecognizer *) sender;
- (IBAction) pinchGesture: (UIPinchGestureRecognizer *) sender;
- (IBAction) swipeGesture: (UISwipeGestureRecognizer *) sender;
- (IBAction) longPressGesture: (UILongPressGestureRecognizer *) sender;

@end

