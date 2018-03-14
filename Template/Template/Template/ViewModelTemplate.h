#import <Foundation/Foundation.h>
#import "<#Unit#>Interface.h"

@interface <#Unit#>ViewModel : NSObject <<#Unit#>ViewModelInterface>

@property (nonatomic,strong) id<<#Unit#>ModelInterface> model;

- (void)initializeWithParameter:(NSDictionary *)parameter finishedCallBack:(void(^)())finishCallBack;
<#ViewModelInterface#>

@end