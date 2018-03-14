#import <UIKit/UIKit.h>
#import "<#Unit#>Interface.h"

@interface <#Unit#>Presenter : NSObject<<#Unit#>ViewOperation>

@property (nonatomic,weak) id<<#Unit#>ViewInterface> <#unit#>View;
@property (nonatomic,weak) id<<#Unit#>ViewModelInterface> <#unit#>ViewModel;

- (void)adapterWith<#Unit#>View:(id<<#Unit#>ViewInterface>)<#unit#>View <#unit#>ViewModel:(id<<#Unit#>ViewModelInterface>)<#unit#>ViewModel;

@end