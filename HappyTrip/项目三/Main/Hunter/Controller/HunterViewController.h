//
//  HunterViewController.h
//  项目三
//


#import <UIKit/UIKit.h>

@interface HunterViewController : UIViewController
@property(nonatomic,copy)NSString *cityName;
@property(nonatomic,copy)NSString *cityID;
@property(nonatomic ,strong)UITableView *tableView;
@property(nonatomic,strong)HunterModel *model;
@property(nonatomic,copy)NSString *way;
@property(nonatomic,strong)UIView *SequenceView;

@end
