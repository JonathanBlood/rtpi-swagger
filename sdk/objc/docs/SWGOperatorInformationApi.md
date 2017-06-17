# SWGOperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOperators**](SWGOperatorInformationApi.md#getoperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


# **getOperators**
```objc
-(NSNumber*) getOperatorsWithFormat: (NSString*) format
        completionHandler: (void (^)(SWGOperatorList* output, NSError* error)) handler;
```

Endpoint to retrieve information about route operators in the system

### Example 
```objc

NSString* format = @"format_example"; // If not provided JSON format will be used by default (optional)

SWGOperatorInformationApi*apiInstance = [[SWGOperatorInformationApi alloc] init];

// Endpoint to retrieve information about route operators in the system
[apiInstance getOperatorsWithFormat:format
          completionHandler: ^(SWGOperatorList* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGOperatorInformationApi->getOperators: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **NSString***| If not provided JSON format will be used by default | [optional] 

### Return type

[**SWGOperatorList***](SWGOperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

