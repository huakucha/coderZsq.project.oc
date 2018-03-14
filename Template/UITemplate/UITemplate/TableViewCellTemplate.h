#import <UIKit/UIKit.h>
#import "<#Unit#>CellAdapter.h"

@interface <#Unit#>Cell : UITableViewCell

@property (nonatomic,strong) id<<#Unit#>CellAdapter> adapter;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

+ (CGFloat)cellHeight;

@end