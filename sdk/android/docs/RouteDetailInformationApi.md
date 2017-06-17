# RouteDetailInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRouteDetail**](RouteDetailInformationApi.md#getRouteDetail) | **GET** /routeinformation | Endpoint to retrieve route detail information


<a name="getRouteDetail"></a>
# **getRouteDetail**
> RouteDetailList getRouteDetail(operator, routeid, format)

Endpoint to retrieve route detail information

### Example
```java
// Import classes:
//import io.swagger.client.api.RouteDetailInformationApi;

RouteDetailInformationApi apiInstance = new RouteDetailInformationApi();
String operator = "operator_example"; // String | The requested operator id
String routeid = "routeid_example"; // String | The requested route id
String format = "format_example"; // String | If not provided JSON format will be used by default
try {
    RouteDetailList result = apiInstance.getRouteDetail(operator, routeid, format);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling RouteDetailInformationApi#getRouteDetail");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **operator** | **String**| The requested operator id | [enum: BE, bac, KB, LUAS, ir]
 **routeid** | **String**| The requested route id |
 **format** | **String**| If not provided JSON format will be used by default | [optional] [enum: json, xml]

### Return type

[**RouteDetailList**](RouteDetailList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

