//
//  SingleGameView.h
//  CircleCircleRevolution
//
//  Created by Buike Ndefo-Dahl on 6/10/13.
//  Copyright (c) 2013 Kathryn Aplin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SingleGameView;

@protocol ButtonOnGame1Pressed <NSObject>
-(void) passedButtonPress:(UIButton*)button;
-(void) gamePause;
-(void) gameResume;

@end

@interface SingleGameView : UIView
{
    UIButton* menuButton;
    UIView* pauseView;
    UIButton* pauseButton;
    UIButton* resumeButton;
    
}

@property (weak,nonatomic)id<ButtonOnGame1Pressed> pressedDelegate;

@end
