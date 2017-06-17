# RealTimeBusInformationApi

All URIs are relative to *https://data.dublinked.ie/cgi-bin/rtpi/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getRealTimeBusInformation**](RealTimeBusInformationApi.md#getRealTimeBusInformation) | **GET** /realtimebusinformation | Endpoint to retrieve real time bus information


<a name="getRealTimeBusInformation"></a>
# **getRealTimeBusInformation**
> RealTimeInformationList getRealTimeBusInformation(stopid, format, operator, routeid, maxresults)

Endpoint to retrieve real time bus information

### Example
```java
// Import classes:
//import io.swagger.client.ApiException;
//import io.swagger.client.api.RealTimeBusInformationApi;


RealTimeBusInformationApi apiInstance = new RealTimeBusInformationApi();
String stopid = "stopid_example"; // String | The bus stop id
String format = "format_example"; // String | If not provided JSON format will be used by default
String operator = "operator_example"; // String | If provided retrieves routes for the given operator
String routeid = "routeid_example"; // String | The route identifier
String maxresults = "maxresults_example"; // String | The maximum number of results, if not provided system will limit the number of results depending on server configuration
try {
    RealTimeInformationList result = apiInstance.getRealTimeBusInformation(stopid, format, operator, routeid, maxresults);
    System.out.println(result);
} catch (ApiException e) {
    System.err.println("Exception when calling RealTimeBusInformationApi#getRealTimeBusInformation");
    e.printStackTrace();
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **stopid** | **String**| The bus stop id |
 **format** | **String**| If not provided JSON format will be used by default | [optional] [enum: json, xml]
 **operator** | **String**| If provided retrieves routes for the given operator | [optional] [enum: BE, bac, KB, LUAS, ir]
 **routeid** | **String**| The route identifier | [optional]
 **maxresults** | **String**| The maximum number of results, if not provided system will limit the number of results depending on server configuration | [optional]

### Return type

[**RealTimeInformationList**](RealTimeInformationList.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

