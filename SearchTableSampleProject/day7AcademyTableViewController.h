//
//  day7AcademyTableViewController.h
//  SearchTableSampleProject
//
//  Created by Faik Catibusic on 8/27/14.
//  Copyright (c) 2014 Faik Catibusic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface day7AcademyTableViewController : UITableViewController
<UISearchDisplayDelegate>

@property (nonatomic, strong) NSArray *tableData;

@property (nonatomic, strong) NSMutableArray *searchResult;

@end
