# OperatorInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getOperators**](OperatorInformationApi.md#getOperators) | **GET** /operatorinformation | Endpoint to retrieve information about route operators in the system


<a name="getOperators"></a>
# **getOperators**
> OperatorList getOperators(format)

Endpoint to retrieve information about route operators in the system

### Example
```java
// Import classes:
//import io.swagger.client.ApiException;
//import io.swagger.client.api.OperatorInformationApi;


OperatorInformationApi apiInstance = new OperatorInformationApi();
String format = "format_example"; // String | If not provided JSON format will be used by default
try {
    OperatorList result = apiInstance.getOperators(format);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling OperatorInformationApi#getOperators");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **String**| If not provided JSON format will be used by default | [optional] [enum: json, xml]

### Return type

[**OperatorList**](OperatorList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

