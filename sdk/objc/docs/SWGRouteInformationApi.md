# SWGRouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRoutes**](SWGRouteInformationApi.md#getroutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


# **getRoutes**
```objc
-(NSNumber*) getRoutesWithFormat: (NSString*) format
    operator: (NSString*) operator
        completionHandler: (void (^)(SWGRouteList* output, NSError* error)) handler;
```

Endpoint to retrieve list of routes

### Example 
```objc

NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)
NSString* operator = @"operator_example"; // If provided retrieves routes for the given operator (optional)

SWGRouteInformationApi*apiInstance = [[SWGRouteInformationApi alloc] init];

// Endpoint to retrieve list of routes
[apiInstance getRoutesWithFormat:format
              operator:operator
          completionHandler: ^(SWGRouteList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGRouteInformationApi->getRoutes: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 
 **operator** | **NSString***| If provided retrieves routes for the given operator | [optional] 

### Return type

[**SWGRouteList***](SWGRouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

