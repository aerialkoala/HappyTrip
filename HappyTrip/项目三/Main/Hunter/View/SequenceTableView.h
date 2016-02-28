//
//  SequenceTableView.h
//  项目三

#import <UIKit/UIKit.h>

@interface SequenceTableView : UITableView<UITableViewDataSource,UITableViewDelegate>
@property(nonatomic,strong)NSArray *arr;
@end
