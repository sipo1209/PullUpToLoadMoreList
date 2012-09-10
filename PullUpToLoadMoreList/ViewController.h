//
//  ViewController.h
//  PullUpToLoadMoreList
//
//  Created by Hsuzhongzhou on 12-9-10.
//  Copyright (c) 2012年 eshore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, EGORefreshTableHeaderDelegate>
{
    EGORefreshTableHeaderView* refreshHeaderView;
    //  Reloading var should really be your tableviews datasource
	//  Putting it here for demo purposes
	BOOL _reloading;
}

@property (retain, nonatomic) IBOutlet UITableView *ibTableView;

- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;

@end
