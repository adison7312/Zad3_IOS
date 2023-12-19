//
//  SecondViewController.h
//  ZAD3IOS
//
//  Created by student on 19/12/2023.
//  Copyright © 2023 sm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SecondViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}

@property (nonatomic, weak) IBOutlet UILabel *latitude;
@property (nonatomic, weak) IBOutlet UITextField *latitudeInfo;
@property (nonatomic, weak) IBOutlet UILabel *longtitude;
@property (nonatomic, weak) IBOutlet UITextField *longtitudeInfo;
@property (nonatomic, weak) IBOutlet UILabel *address;
@property (nonatomic, weak) IBOutlet UITextView *addressInfo;
@property (nonatomic, weak) IBOutlet UIButton *btn;



-(IBAction) getCurrentLocation:(id)sender;
@end

NS_ASSUME_NONNULL_END
