#import "SWGRealTimeBusInformationApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGRealTimeInformationList.h"


@interface SWGRealTimeBusInformationApi ()

@property (nonatomic, strong) NSMutableDictionary *defaultHeaders;

@end

@implementation SWGRealTimeBusInformationApi

NSString* kSWGRealTimeBusInformationApiErrorDomain = @"SWGRealTimeBusInformationApiErrorDomain";
NSInteger kSWGRealTimeBusInformationApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    self = [super init];
    if (self) {
        SWGConfiguration *config = [SWGConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SWGApiClient alloc] init];
        }
        _apiClient = config.apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+ (instancetype)sharedAPI {
    static SWGRealTimeBusInformationApi *sharedAPI;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        sharedAPI = [[self alloc] init];
    });
    return sharedAPI;
}

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.defaultHeaders[key];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self setDefaultHeaderValue:value forKey:key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(NSUInteger) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// Endpoint to retrieve real time bus information
/// 
///  @param stopid The bus stop id 
///
///  @param format If not provided JSON format will be used by default (optional)
///
///  @param operator If provided retrieves routes for the given operator (optional)
///
///  @param routeid The route identifier (optional)
///
///  @param maxresults The maximum number of results, if not provided system will limit the number of results depending on server configuration (optional)
///
///  @returns SWGRealTimeInformationList*
///
-(NSNumber*) getRealTimeBusInformationWithStopid: (NSString*) stopid
    format: (NSString*) format
    operator: (NSString*) operator
    routeid: (NSString*) routeid
    maxresults: (NSString*) maxresults
    completionHandler: (void (^)(SWGRealTimeInformationList* output, NSError* error)) handler {
    // verify the required parameter 'stopid' is set
    if (stopid == nil) {
        NSParameterAssert(stopid);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"stopid"] };
            NSError* error = [NSError errorWithDomain:kSWGRealTimeBusInformationApiErrorDomain code:kSWGRealTimeBusInformationApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/realtimebusinformation"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (format != nil) {
        queryParams[@"format"] = format;
    }
    if (operator != nil) {
        queryParams[@"operator"] = operator;
    }
    if (stopid != nil) {
        queryParams[@"stopid"] = stopid;
    }
    if (routeid != nil) {
        queryParams[@"routeid"] = routeid;
    }
    if (maxresults != nil) {
        queryParams[@"maxresults"] = maxresults;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json", @"application/xml"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json", @"application/xml"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGRealTimeInformationList*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGRealTimeInformationList*)data, error);
                                }
                           }
          ];
}



@end
