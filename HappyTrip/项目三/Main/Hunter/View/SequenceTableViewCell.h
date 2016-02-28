//
//  SequenceTableViewCell.h
//  项目三


#import <UIKit/UIKit.h>

@interface SequenceTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *name;
@property (nonatomic,strong)HunterModel *model;
@property (nonatomic,copy)NSString *myId;
@end
