#import "<#SubUnit#>Model.h"

@implementation <#SubUnit#>Model

- (instancetype)initWithDictionary:(NSDictionary *)dictionary {
    
    self = [super init];
    if (self) {
        [self setValuesForKeysWithDictionary:dictionary];
    }
    return self;
}

+ (<#SubUnit#>Model *)modelWithDictionary:(NSDictionary *)dictionary {
    return [[<#SubUnit#>Model alloc]initWithDictionary:dictionary];
}

@end