#import "<#Unit#>Model.h"

@implementation <#Unit#>Model

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    
    self = [super init];
    if (self) {
        [self setValuesForKeysWithDictionary:dictionary];
    }
    return self;
}

+ (<#Unit#>Model *)modelWithDictionary:(NSDictionary *)dictionary {
    return [[<#Unit#>Model alloc]initWithDictionary:dictionary];
}

@end