//
//  ACEViewController.h
//  ACEDrawingViewDemo
//
//  Created by Stefano Acerbetti on 1/6/13.
//  Copyright (c) 2013 Stefano Acerbetti. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ACEDrawingView;

@interface ACEViewController : UIViewController

@property (nonatomic, unsafe_unretained) IBOutlet ACEDrawingView *drawingView;
@property (nonatomic, unsafe_unretained) IBOutlet UISlider *lineWidthSlider;
@property (nonatomic, unsafe_unretained) IBOutlet UISlider *lineAlphaSlider;
@property (nonatomic, unsafe_unretained) IBOutlet UIImageView *previewImageView;

// actions
- (IBAction)undo:(id)sender;
- (IBAction)redo:(id)sender;
- (IBAction)clear:(id)sender;
- (IBAction)takeScreenshot:(id)sender;

// settings
- (IBAction)colorChange:(UISegmentedControl *)sender;
- (IBAction)toggleWidthSlider:(id)sender;
- (IBAction)widthChange:(UISlider *)sender;
- (IBAction)toggleAlphaSlider:(id)sender;
- (IBAction)alphaChange:(UISlider *)sender;

@end
