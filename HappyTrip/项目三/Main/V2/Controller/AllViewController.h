//
//  AllViewController.h
//  项目三
//


#import <UIKit/UIKit.h>

@interface AllViewController : UIViewController<UICollectionViewDelegateFlowLayout,UICollectionViewDataSource,UINavigationBarDelegate>

@property (nonatomic , strong) NSMutableArray *arr;
@property (nonatomic, strong) UICollectionView *collectionView;
@end
