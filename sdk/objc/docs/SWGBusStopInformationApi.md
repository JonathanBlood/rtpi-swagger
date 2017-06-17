# SWGBusStopInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBusStops**](SWGBusStopInformationApi.md#getbusstops) | **GET** /busstopinformation | Endpoint to retrieve bus stop information


# **getBusStops**
```objc
-(NSNumber*) getBusStopsWithFormat: (NSString*) format
    operator: (NSString*) operator
    stopid: (NSString*) stopid
    stopname: (NSString*) stopname
        completionHandler: (void (^)(SWGBusStopList* output, NSError* error)) handler;
```

Endpoint to retrieve bus stop information

### Example 
```objc

NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)
NSString* operator = @"operator_example"; // If provided retrieves routes for the given operator (optional)
NSString* stopid = @"stopid_example"; // The bus stop id, if not provided all bus stops are returned (optional)
NSString* stopname = @"stopname_example"; // The stop name, only matching stops are returned (optional)

SWGBusStopInformationApi*apiInstance = [[SWGBusStopInformationApi alloc] init];

// Endpoint to retrieve bus stop information
[apiInstance getBusStopsWithFormat:format
              operator:operator
              stopid:stopid
              stopname:stopname
          completionHandler: ^(SWGBusStopList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBusStopInformationApi->getBusStops: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 
 **operator** | **NSString***| If provided retrieves routes for the given operator | [optional] 
 **stopid** | **NSString***| The bus stop id, if not provided all bus stops are returned | [optional] 
 **stopname** | **NSString***| The stop name, only matching stops are returned | [optional] 

### Return type

[**SWGBusStopList***](SWGBusStopList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

