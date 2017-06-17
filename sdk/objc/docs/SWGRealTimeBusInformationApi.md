# SWGRealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRealTimeBusInformation**](SWGRealTimeBusInformationApi.md#getrealtimebusinformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


# **getRealTimeBusInformation**
```objc
-(NSNumber*) getRealTimeBusInformationWithStopid: (NSString*) stopid
    format: (NSString*) format
    operator: (NSString*) operator
    routeid: (NSString*) routeid
    maxresults: (NSString*) maxresults
        completionHandler: (void (^)(SWGRealTimeInformationList* output, NSError* error)) handler;
```

Endpoint to retrieve real time bus information

### Example 
```objc

NSString* stopid = @"stopid_example"; // The bus stop id
NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)
NSString* operator = @"operator_example"; // If provided retrieves routes for the given operator (optional)
NSString* routeid = @"routeid_example"; // The route identifier (optional)
NSString* maxresults = @"maxresults_example"; // The maximum number of results, if not provided system will limit the number of results depending on server configuration (optional)

SWGRealTimeBusInformationApi*apiInstance = [[SWGRealTimeBusInformationApi alloc] init];

// Endpoint to retrieve real time bus information
[apiInstance getRealTimeBusInformationWithStopid:stopid
              format:format
              operator:operator
              routeid:routeid
              maxresults:maxresults
          completionHandler: ^(SWGRealTimeInformationList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGRealTimeBusInformationApi->getRealTimeBusInformation: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **NSString***| The bus stop id | 
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 
 **operator** | **NSString***| If provided retrieves routes for the given operator | [optional] 
 **routeid** | **NSString***| The route identifier | [optional] 
 **maxresults** | **NSString***| The maximum number of results, if not provided system will limit the number of results depending on server configuration | [optional] 

### Return type

[**SWGRealTimeInformationList***](SWGRealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

