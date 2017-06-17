#import "SWGRealTimeInformation.h"

@implementation SWGRealTimeInformation

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"arrivaldatetime": @"arrivaldatetime", @"duetime": @"duetime", @"departuredatetime": @"departuredatetime", @"departureduetime": @"departureduetime", @"scheduledarrivaldatetime": @"scheduledarrivaldatetime", @"scheduleddeparturedatetime": @"scheduleddeparturedatetime", @"destination": @"destination", @"destinationlocalized": @"destinationlocalized", @"origin": @"origin", @"originlocalized": @"originlocalized", @"direction": @"direction", @"operator": @"operator", @"additionalinformation": @"additionalinformation", @"lowfloorstatus": @"lowfloorstatus", @"route": @"route", @"sourcetimestamp": @"sourcetimestamp", @"monitored": @"monitored" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"arrivaldatetime", @"duetime", @"departuredatetime", @"departureduetime", @"scheduledarrivaldatetime", @"scheduleddeparturedatetime", @"destination", @"destinationlocalized", @"origin", @"originlocalized", @"direction", @"operator", @"additionalinformation", @"lowfloorstatus", @"route", @"sourcetimestamp", @"monitored"];
  return [optionalProperties containsObject:propertyName];
}

@end
