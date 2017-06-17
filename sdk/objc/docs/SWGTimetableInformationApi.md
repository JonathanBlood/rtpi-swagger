# SWGTimetableInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getTimeTable**](SWGTimetableInformationApi.md#gettimetable) | **GET** /timetableinformation | Endpoint to retrieve timetable information


# **getTimeTable**
```objc
-(NSNumber*) getTimeTableWithType: (NSString*) type
    stopid: (NSString*) stopid
    routeid: (NSString*) routeid
    format: (NSString*) format
        completionHandler: (void (^)(SWGTimetableList* output, NSError* error)) handler;
```

Endpoint to retrieve timetable information

### Example 
```objc

NSString* type = @"type_example"; // value: week; Time table information is retrieved for the whole week
NSString* stopid = @"stopid_example"; // The bus stop id, if not provided all bus stops are returned
NSString* routeid = @"routeid_example"; // The route identifier
NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)

SWGTimetableInformationApi*apiInstance = [[SWGTimetableInformationApi alloc] init];

// Endpoint to retrieve timetable information
[apiInstance getTimeTableWithType:type
              stopid:stopid
              routeid:routeid
              format:format
          completionHandler: ^(SWGTimetableList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGTimetableInformationApi->getTimeTable: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type** | **NSString***| value: week; Time table information is retrieved for the whole week | 
 **stopid** | **NSString***| The bus stop id, if not provided all bus stops are returned | 
 **routeid** | **NSString***| The route identifier | 
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 

### Return type

[**SWGTimetableList***](SWGTimetableList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

