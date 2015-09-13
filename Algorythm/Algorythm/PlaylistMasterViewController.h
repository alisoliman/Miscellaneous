//
//  ViewController.h
//  Algorythm
//
//  Created by Ali Soliman on 7/27/15.
//  Copyright (c) 2015 Ali Soliman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlaylistMasterViewController : UIViewController

@property (strong,nonatomic) IBOutletCollection(UIImageView) NSArray *playlistImageViews;
@property (weak, nonatomic) IBOutlet UIImageView *playlistImageView0;

@end

