//

#import <UIKit/UIKit.h>
@class MainModel;
@interface ScrollerViewController : UIViewController

@property (nonatomic ,copy) NSString *html_url;
@property (nonatomic ,strong)MainModel *main;
@property (nonatomic ,copy) NSString *url;
@property (nonatomic , copy) NSString *cellUrl;

@end
