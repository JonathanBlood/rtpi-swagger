# RouteInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRoutes**](RouteInformationApi.md#getRoutes) | **GET** /routelistinformation | Endpoint to retrieve list of routes


<a name="getRoutes"></a>
# **getRoutes**
> RouteList getRoutes(format, operator)

Endpoint to retrieve list of routes

### Example
```java
// Import classes:
//import io.swagger.client.ApiException;
//import io.swagger.client.api.RouteInformationApi;


RouteInformationApi apiInstance = new RouteInformationApi();
String format = "format_example"; // String | If not provided JSON format will be used by default
String operator = "operator_example"; // String | If provided retrieves routes for the given operator
try {
    RouteList result = apiInstance.getRoutes(format, operator);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling RouteInformationApi#getRoutes");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **format** | **String**| If not provided JSON format will be used by default | [optional] [enum: json, xml]
 **operator** | **String**| If provided retrieves routes for the given operator | [optional] [enum: BE, bac, KB, LUAS, ir]

### Return type

[**RouteList**](RouteList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

