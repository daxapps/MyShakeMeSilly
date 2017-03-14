//
//  ViewController.h
//  MyShakeMeSilly
//
//  Created by Jason Crawford on 3/14/17.
//  Copyright © 2017 Jason Crawford. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    NSTimer *timer;
    
    int timeInt;
    int scoreInt;
    
    int modeInt;
    int imageInt;
    
}

@property (weak, nonatomic) IBOutlet UILabel *timerLabel;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *startGameButton;

- (IBAction)startGame:(id)sender;




@end

