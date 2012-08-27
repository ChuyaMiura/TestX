//
//  IncludeTableViewController.h
//  TestX
//
//  Created by 宙也 三浦 on 12/08/27.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IncludeTableViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>{
    
}

@property(nonatomic,retain) IBOutlet UILabel  *titleLabel;
@property (nonatomic, retain) IBOutlet UITableView *tView;

@end
