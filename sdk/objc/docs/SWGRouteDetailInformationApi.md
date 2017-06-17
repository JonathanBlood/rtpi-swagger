# SWGRouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRouteDetail**](SWGRouteDetailInformationApi.md#getroutedetail) | **GET** /routeinformation | Endpoint to retrieve route detail information


# **getRouteDetail**
```objc
-(NSNumber*) getRouteDetailWithOperator: (NSString*) operator
    routeid: (NSString*) routeid
    format: (NSString*) format
        completionHandler: (void (^)(SWGRouteDetailList* output, NSError* error)) handler;
```

Endpoint to retrieve route detail information

### Example 
```objc

NSString* operator = @"operator_example"; // The requested operator id
NSString* routeid = @"routeid_example"; // The requested route id
NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)

SWGRouteDetailInformationApi*apiInstance = [[SWGRouteDetailInformationApi alloc] init];

// Endpoint to retrieve route detail information
[apiInstance getRouteDetailWithOperator:operator
              routeid:routeid
              format:format
          completionHandler: ^(SWGRouteDetailList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGRouteDetailInformationApi->getRouteDetail: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **NSString***| The requested operator id | 
 **routeid** | **NSString***| The requested route id | 
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 

### Return type

[**SWGRouteDetailList***](SWGRouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

