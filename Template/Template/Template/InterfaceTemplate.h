#import <UIKit/UIKit.h>

@protocol <#Unit#>ViewOperation <NSObject>
<#ViewOperation#>

@end

@protocol <#Unit#>ModelInterface <NSObject>
<#ModelInterface#>

@end

@protocol <#Unit#>ViewModelInterface <NSObject>

@property (nonatomic,strong) id<<#Unit#>ModelInterface> model;

- (void)initializeWithParameter:(NSDictionary *)parameter finishedCallBack:(void(^)())finishCallBack;
<#ViewModelInterface#>
@end

@protocol <#Unit#>ViewInterface <NSObject>

@property (nonatomic,strong) id<<#Unit#>ViewModelInterface> <#unit#>ViewModel;
@property (nonatomic,strong) id<<#Unit#>ViewOperation> <#unit#>Operation;

@end